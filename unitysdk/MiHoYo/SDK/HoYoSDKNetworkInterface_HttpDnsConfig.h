#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPDNSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C72A670)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface_HttpDnsConfig_TypeDefinitionIndex = 36493;

	class HoYoSDKNetworkInterface_HttpDnsConfig : public ::System::Object
	{
	public:
		::System::Boolean httpdns_enable; // 0x10
		::System::Int32 httpdns_cache_expire_time; // 0x14
		::System::String* httpdns_env; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_HTTPDNSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
