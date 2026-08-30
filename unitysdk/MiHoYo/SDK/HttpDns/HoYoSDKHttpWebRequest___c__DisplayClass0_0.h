#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface_HttpRequestParams; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HttpResponse; }
namespace MiHoYo::SDK::HttpDns { class HoYoSDKHttpWebRequest; }
namespace MiHoYo::SDK::HttpDns { class HoYoSDKHttpWebResponse; }

#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F9190)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_0__GETRESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0x1C6F9A60)

namespace MiHoYo::SDK::HttpDns
{
	inline static constexpr unsigned int HoYoSDKHttpWebRequest___c__DisplayClass0_0_TypeDefinitionIndex = 47164;

	class HoYoSDKHttpWebRequest___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HttpDns::HoYoSDKHttpWebRequest* __4__this; // 0x10
		::MiHoYo::SDK::HttpDns::HoYoSDKHttpWebResponse* httpWebResponse; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* _GetResponse_b__0(::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams* a1)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBREQUEST___C__DISPLAYCLASS0_0__GETRESPONSE_B__0_OFFSET))(this, a1);
		}
	};
}
