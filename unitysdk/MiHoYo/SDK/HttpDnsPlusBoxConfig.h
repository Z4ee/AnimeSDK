#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HTTPDNSPLUSBOXCONFIG_GETAREA_OFFSET UNITYSDK_OFFSET(0x1BDCC530)
#define MIHOYO_SDK_HTTPDNSPLUSBOXCONFIG_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1BDCC4D0)
#define MIHOYO_SDK_HTTPDNSPLUSBOXCONFIG_ISIPREPORTENABLE_OFFSET UNITYSDK_OFFSET(0x1BDCC620)
#define MIHOYO_SDK_HTTPDNSPLUSBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDCBFB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HttpDnsPlusBoxConfig_TypeDefinitionIndex = 20029;

	class HttpDnsPlusBoxConfig : public ::System::Object
	{
	public:
		::System::Int32 enable; // 0x10
		::System::Int32 cache_expire_time; // 0x14
		::System::Int32 ip_report_enable; // 0x18

		::System::Void _ctor(::System::String* strJson)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNSPLUSBOXCONFIG__CTOR_OFFSET))(this, strJson);
		}

		::System::Boolean IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNSPLUSBOXCONFIG_ISENABLE_OFFSET))(this);
		}

		::System::Boolean IsIpReportEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNSPLUSBOXCONFIG_ISIPREPORTENABLE_OFFSET))(this);
		}

		::System::String* GetArea()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNSPLUSBOXCONFIG_GETAREA_OFFSET))(this);
		}
	};
}
