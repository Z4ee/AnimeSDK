#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface_CustomHttpRequestHandler; }
namespace MiHoYo::SDK::HttpDns { class HoYoSDKHttpWebRequest___c__DisplayClass0_1; }

#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x84EDFD0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_2__GETRESPONSE_B__1_OFFSET UNITYSDK_OFFSET(0x84EEE60)

namespace MiHoYo::SDK::HttpDns
{
	inline static constexpr unsigned int HoYoSDKHttpWebRequest___c__DisplayClass0_2_TypeDefinitionIndex = 37388;

	class HoYoSDKHttpWebRequest___c__DisplayClass0_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoSDKNetworkInterface_CustomHttpRequestHandler* handler; // 0x10
		::MiHoYo::SDK::HttpDns::HoYoSDKHttpWebRequest___c__DisplayClass0_1* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_2__CTOR_OFFSET))(this);
		}

		::System::Void _GetResponse_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_2__GETRESPONSE_B__1_OFFSET))(this);
		}
	};
}
