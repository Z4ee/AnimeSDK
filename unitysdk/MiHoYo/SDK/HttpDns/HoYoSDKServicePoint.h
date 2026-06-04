#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_HTTPDNS_HOYOSDKSERVICEPOINT_GET_CONNECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0xA17B480)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKSERVICEPOINT_SET_CONNECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0xA17B490)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKSERVICEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xA17A0B0)

namespace MiHoYo::SDK::HttpDns
{
	inline static constexpr unsigned int HoYoSDKServicePoint_TypeDefinitionIndex = 44064;

	class HoYoSDKServicePoint : public ::System::Object
	{
	public:
		::System::Int32 _ConnectionLimit_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKSERVICEPOINT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConnectionLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKSERVICEPOINT_GET_CONNECTIONLIMIT_OFFSET))(this);
		}

		::System::Void set_ConnectionLimit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKSERVICEPOINT_SET_CONNECTIONLIMIT_OFFSET))(this, a1);
		}
	};
}
