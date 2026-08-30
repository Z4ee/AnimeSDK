#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface___c__DisplayClass12_2; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HttpResponse; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F1100)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_3__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__4_OFFSET UNITYSDK_OFFSET(0x1C6F15E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface___c__DisplayClass12_3_TypeDefinitionIndex = 46564;

	class HoYoSDKNetworkInterface___c__DisplayClass12_3 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoSDKNetworkInterface___c__DisplayClass12_2* CS___8__locals3; // 0x10
		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* response; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_3__CTOR_OFFSET))(this);
		}

		::System::Void _HttpDnsHttpRequestWithCustomHandler_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_3__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__4_OFFSET))(this);
		}
	};
}
