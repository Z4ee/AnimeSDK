#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReporterUtil/ReporterDataItem_TimeStatus.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_BEGIN_OFFSET UNITYSDK_OFFSET(0xB030950)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_DURATIONWITH_OFFSET UNITYSDK_OFFSET(0xB030A10)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_END_OFFSET UNITYSDK_OFFSET(0xB0309B0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0xB030810)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xB030830)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xB0307F0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_TOTALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xB030850)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SETSAMETIMETO_OFFSET UNITYSDK_OFFSET(0xB02F940)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0xB030820)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xB030840)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xB030800)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB030B60)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterDataItem_TypeDefinitionIndex = 46644;

	class ReporterDataItem : public ::System::Object
	{
	public:
		::System::DateTime endTime; // 0x10
		::System::DateTime beginTime; // 0x18
		::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus _Status_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus get_Status()
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_STATUS_OFFSET))(this, a1);
		}

		::System::DateTime get_BeginTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Void set_BeginTime(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_BEGINTIME_OFFSET))(this, a1);
		}

		::System::DateTime get_EndTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_ENDTIME_OFFSET))(this, a1);
		}

		::System::Int64 get_TotalMilliseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_TOTALMILLISECONDS_OFFSET))(this);
		}

		::System::Void Begin(::System::Nullable_1<::System::DateTime> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_BEGIN_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* SetSameTimeTo(::MiHoYo::SDK::ReporterUtil::ReporterDataItem* a1)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SETSAMETIMETO_OFFSET))(this, a1);
		}

		::System::Void End(::System::Nullable_1<::System::DateTime> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_END_OFFSET))(this, a1);
		}

		::System::Int64 DurationWith(::MiHoYo::SDK::ReporterUtil::ReporterDataItem* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_DURATIONWITH_OFFSET))(this, a1);
		}
	};
}
