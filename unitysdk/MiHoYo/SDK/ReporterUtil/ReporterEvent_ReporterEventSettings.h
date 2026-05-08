#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_GET_AUTOENDWITHNEXTBEGIN_OFFSET UNITYSDK_OFFSET(0x1A9EA3A0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_GET_ISCONTINUOUS_OFFSET UNITYSDK_OFFSET(0x1A9EA380)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_SET_AUTOENDWITHNEXTBEGIN_OFFSET UNITYSDK_OFFSET(0x1A9EA3B0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_SET_ISCONTINUOUS_OFFSET UNITYSDK_OFFSET(0x1A9EA390)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9EA3C0)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterEvent_ReporterEventSettings_TypeDefinitionIndex = 35423;

	class ReporterEvent_ReporterEventSettings : public ::System::Object
	{
	public:
		::System::Int64 milliSecondsForAutoReport; // 0x10
		::System::Boolean _IsContinuous_k__BackingField; // 0x18
		::System::Boolean _AutoEndWithNextBegin_k__BackingField; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsContinuous()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_GET_ISCONTINUOUS_OFFSET))(this);
		}

		::System::Void set_IsContinuous(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_SET_ISCONTINUOUS_OFFSET))(this, value);
		}

		::System::Boolean get_AutoEndWithNextBegin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_GET_AUTOENDWITHNEXTBEGIN_OFFSET))(this);
		}

		::System::Void set_AutoEndWithNextBegin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_SET_AUTOENDWITHNEXTBEGIN_OFFSET))(this, value);
		}
	};
}
