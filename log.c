2019/03/25
sudo chsh -s /usr/local/bin/zsh
chsh -s /bin/bash

2019/03/30
vim /etc/ssh/sshd_config 
ClientAliveInterval  60   --应该是需要重启,本地端口也是一样的

2019/04/01
echo '' >> test.c
add 2019/04/10
echo '' > test.c 删除重新输入
set .vimrc http://wiki.csie.ncku.edu.tw/vim/vimrc
python using window10
  -->> https://blog.csdn.net/Alger_magic/article/details/79674404

2019/04/02
解决vi/vim中粘贴会在行首多很多缩进和空格的问题
https://www.cnblogs.com/end/archive/2012/06/01/2531142.html
输入前--> set paste
输入后-->	set nopaste
vim删除前后n个字符
前n个：:%s/^.\{10\}//
	其中，%表示所有行，s表示替换，"%s"可用"1,$"代替（下同）；正则表达式"/^.\{10\}//"中，
	^表示行首；"."表示要删除的字符个数，".\{10\}"表示删除10个字符，可用10个"."表示；
后n个：:%s/.\{10\}$//
	其中，"$"表示行尾，其他同上；

2019/04/03
domain name 域名	DNS --> domain name systerm 域名系统
Dynamic Host Configuration Protocol, DHCP --> 动态主机设定协议
用于內部網路或網絡服務供應商自動分配IP地址給用戶
用于內部網路管理員作為對所有電腦作中央管理的手段

2019/04/07
afu server : git@120.25.74.135:/srv/git/name

2019/04/10
/etc/shadowsocks/config.json
	add 2019/04/13
	/etc/init.d/shadowsocks start
													stop
													restart
													status

2019/04/11
Chrome :
Ctrl+T  新建一个标签页
Ctrl+Shift+T  撤回上一个删除的标签页
Ctrl+N   新建一个新窗口
Ctrl+Shift+N  打开无痕浏览模式
Ctrl+Tab  同一个窗口内的标签页切换

2019/04/13
ssh -o ServerAliveInterval=30 -p
	--keep ssh alive
	git reset --soft HEAD^ 
	-- git reset commit 

2019/04/21
https://www.4spaces.org/digitalocean-build-v2ray-0-1/
vpn备选，v2ray可以提供选择

2019/04/23
uint8_t  头文件 stdint.h

getting started MQTT  https://github.com/LiamBindle/MQTT-C
1:
    struct mqtt_client client; /* instantiate the client */
		mqtt_init(&client, ...);   /* initialize the client */

2:
    mqtt_connect(&client, ...); /* send a connection request to the broker. */

3:
		/* subscribe to "toaster/temperature" with a max QoS level of 0 */
    mqtt_subscribe(&client, "toaster/temperature", 0);
4:
	  /* publish coffee temperature with a QoS level of 1 */
    int temperature = 67;
		mqtt_publish(&client, "coffee/temperature", &temperature, sizeof(int), MQTT_PUBLISH_QOS_1);

github  最好不要大于50MB

2019/04/27
potplay alt + c  录制视频

2019/04/28
git stash
經常有這樣的事情發生，當你正在進行專案中某一部分的工作，裡面的東西處於一個比較雜亂的狀態，
而你想轉到其他分支上進行一些工作。問題是，
你不想只為了待會要回到這個工作點，就把做到一半的工作進行提交。解決這個問題的辦法就是 git stash 命令。

2019/04/29
vim 复制粘贴
Normal modle :
y(yank) p(put)  剪贴 d 和 p
v(visual)  p
yiw -> a word yy -> one line

Insert mode:
like the others use mouse 
.vimrc autoindent  ->  set paste /  set nopaste

regester:
anonymous rester,  x删除一个字符（放入了无名寄存器）然后粘贴，可以做到调换
a-z   --> "ayiw bdd cyy  ...  :reg a...
默认0 为复制寄存器 "0  
系统剪贴板  "+ 
:echo has('clipboard')  输出1为支持剪贴板特性 即 "+
set clipboard=unnamed  git应该是默认这种方式

2019/05/08
gcc --std=c99

2019/05/15
vscode 选择多行  control+shift+上，下

2019/05/18
每天下班的时候提交代码，养成好习惯

2019/05/22
Google:
使用浏览器
1：关键词外加英文双引号，表示完全匹配
2：关键词 -不想看到的词
3：关键词 site:域名
4：关键词 filetype:文件类型

2019/05/24
函数数组形参：
void report_data(uint8_t cmd,uint8_t* data,uint8_t len) {
	for(uint8_t i=0;i<=len;i++) {
		*(data+i);
	}
}
//C 定义和赋值
定义：static uint8_t data[] = {0x00,0x01};
赋值：data[0] = 0x01; data[1] = 0x02;

2019/06/21
windows10 开机自启动:
	win + R shell:startup  放入快捷键

zsh in linux 
https://www.howtoforge.com/tutorial/how-to-setup-zsh-and-oh-my-zsh-on-linux/

// 加速
wget -N --no-check-certificate "https://raw.githubusercontent.com/chiakge/Linux-NetSpeed/master/tcp.sh" && chmod +x tcp.sh && ./tcp.sh

// 2019/06/23
https://www.linuxidc.com/Linux/2019-06/158912.htm

// 2019/06/25
 git checkout -b whx origin/whx

 // 2019/07/01                      
 Google 搜索，选择region settings 台湾，用繁体字搜索即可
 微軟拼音 繁體簡體切換 CTRL+SHIFT+F

 //  2019/07/03
 how to use mqtt in linux with mosquitoo
 https://blog.csdn.net/weixin_41656968/article/details/80159589

 //  2019/07/04
 mosquitto_sub -t hello
 mosquitto_pub -t hello -h localhost -m "hello world!"

https://git-scm.com/book/zh/v1/Git-%E5%9F%BA%E7%A1%80-%E6%89%93%E6%A0%87%E7%AD%BE
git tag:             
git tag 
git tag -a v1.0 -m "v1.0"
git show v1.0
git tag -a v1.1 -m "v1.1" 6fceb01
git push origin v1.0
git push origin --tags

2019/07/12
培训：
基尔霍夫定律！！！

2019/07/14
error : git Please move or remove them before you can merge.
lean  -d  -fx ""
or  git add, than git merge dev

recode commands:
asciinema rec /tmp/hello.cast
asciinema play /tmp/hello.cast

