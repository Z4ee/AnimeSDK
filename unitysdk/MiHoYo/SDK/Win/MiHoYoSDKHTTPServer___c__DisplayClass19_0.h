#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class MiHoYoSDKHTTPServer; }
namespace System::Net::Sockets { class TcpClient; }

#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER___C__DISPLAYCLASS19_0__BEGINACCEPTTCPCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18B0F390)
#define MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B0EA50)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKHTTPServer___c__DisplayClass19_0_TypeDefinitionIndex = 9345;

	class MiHoYoSDKHTTPServer___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::MiHoYoSDKHTTPServer* __4__this; // 0x10
		::System::Net::Sockets::TcpClient* client; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _BeginAcceptTcpClient_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKHTTPSERVER___C__DISPLAYCLASS19_0__BEGINACCEPTTCPCLIENT_B__0_OFFSET))(this, a1);
		}
	};
}
