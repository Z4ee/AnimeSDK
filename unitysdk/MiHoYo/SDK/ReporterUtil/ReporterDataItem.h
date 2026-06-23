#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReporterUtil/ReporterDataItem_TimeStatus.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_BEGIN_OFFSET UNITYSDK_OFFSET(0x1D26E660)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_DURATIONWITH_OFFSET UNITYSDK_OFFSET(0x1D26E810)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_END_OFFSET UNITYSDK_OFFSET(0x1D26E760)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1D26E510)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1D26E530)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1D26E4F0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_TOTALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1D26E550)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SETSAMETIMETO_OFFSET UNITYSDK_OFFSET(0x1D26E710)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1D26E520)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1D26E540)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1D26E500)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D26E960)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterDataItem_TypeDefinitionIndex = 37013;

	class ReporterDataItem : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus _Status_k__BackingField; // 0x10
		::System::DateTime beginTime; // 0x18
		::System::DateTime endTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus get_Status()
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_STATUS_OFFSET))(this, value);
		}

		::System::DateTime get_BeginTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Void set_BeginTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_BEGINTIME_OFFSET))(this, value);
		}

		::System::DateTime get_EndTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_ENDTIME_OFFSET))(this, value);
		}

		::System::Int64 get_TotalMilliseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_TOTALMILLISECONDS_OFFSET))(this);
		}

		::System::Void Begin(::System::Nullable_1<::System::DateTime> utcTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_BEGIN_OFFSET))(this, utcTime);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* SetSameTimeTo(::MiHoYo::SDK::ReporterUtil::ReporterDataItem* nextItem)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SETSAMETIMETO_OFFSET))(this, nextItem);
		}

		::System::Void End(::System::Nullable_1<::System::DateTime> utcTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_END_OFFSET))(this, utcTime);
		}

		::System::Int64 DurationWith(::MiHoYo::SDK::ReporterUtil::ReporterDataItem* item)
		{
			return ((::System::Int64(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_DURATIONWITH_OFFSET))(this, item);
		}
	};
}
