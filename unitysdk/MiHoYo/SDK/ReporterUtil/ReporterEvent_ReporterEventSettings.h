#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_GET_AUTOENDWITHNEXTBEGIN_OFFSET UNITYSDK_OFFSET(0xA1FD000)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_GET_ISCONTINUOUS_OFFSET UNITYSDK_OFFSET(0xA1FCFE0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_SET_AUTOENDWITHNEXTBEGIN_OFFSET UNITYSDK_OFFSET(0xA1FD010)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS_SET_ISCONTINUOUS_OFFSET UNITYSDK_OFFSET(0xA1FCFF0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REPORTEREVENTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xA1FC1D0)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterEvent_ReporterEventSettings_TypeDefinitionIndex = 44015;

	class ReporterEvent_ReporterEventSettings : public ::System::Object
	{
	public:
		::System::Boolean _IsContinuous_k__BackingField; // 0x10
		::System::Boolean _AutoEndWithNextBegin_k__BackingField; // 0x11
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
