#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_GET_AUTOENDWITHNEXTBEGIN_OFFSET UNITYSDK_OFFSET(0x1C6BB0C0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_GET_ISCONTINUOUS_OFFSET UNITYSDK_OFFSET(0x1C6BB0A0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_SET_AUTOENDWITHNEXTBEGIN_OFFSET UNITYSDK_OFFSET(0x1C6BB0D0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_SET_ISCONTINUOUS_OFFSET UNITYSDK_OFFSET(0x1C6BB0B0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BA290)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterEvent_ReporterEventSettings_TypeDefinitionIndex = 47113;

	class ReporterEvent_ReporterEventSettings : public ::System::Object
	{
	public:
		::System::Boolean _AutoEndWithNextBegin_k__BackingField; // 0x10
		::System::Boolean _IsContinuous_k__BackingField; // 0x11
		::System::Int64 milliSecondsForAutoReport; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsContinuous()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_GET_ISCONTINUOUS_OFFSET))(this);
		}

		::System::Void set_IsContinuous(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_SET_ISCONTINUOUS_OFFSET))(this, a1);
		}

		::System::Boolean get_AutoEndWithNextBegin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_GET_AUTOENDWITHNEXTBEGIN_OFFSET))(this);
		}

		::System::Void set_AutoEndWithNextBegin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_SET_AUTOENDWITHNEXTBEGIN_OFFSET))(this, a1);
		}
	};
}
