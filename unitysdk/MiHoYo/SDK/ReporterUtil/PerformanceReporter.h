#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::ReporterUtil { class PerformanceReporter_AutoReportHandler; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterDataItem; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterEvent; }
namespace MiHoYo::SDK::ReporterUtil { template <typename T> class AnalyzerResult_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_ADD_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0xB290020)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_BEGIN_OFFSET UNITYSDK_OFFSET(0xB2909D0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_CLEARALLEVENTSWITHEVENTNAME_OFFSET UNITYSDK_OFFSET(0xB290310)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_CLEARDATA_OFFSET UNITYSDK_OFFSET(0xB290110)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_CLEAREVENTSDICTIONARY_OFFSET UNITYSDK_OFFSET(0xB290150)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_DOATSAMETIME_1_OFFSET UNITYSDK_OFFSET(0xB290BC0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_DOATSAMETIME_OFFSET UNITYSDK_OFFSET(0xB290910)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_END_OFFSET UNITYSDK_OFFSET(0xB290A80)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_EVENTSDIC_OFFSET UNITYSDK_OFFSET(0xB28FAA0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_EVENT_1_OFFSET UNITYSDK_OFFSET(0xB2900E0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_EVENT_OFFSET UNITYSDK_OFFSET(0xB28FC00)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_ITEM_OFFSET UNITYSDK_OFFSET(0xB290E10)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_LASTITEMPREFERENDED_OFFSET UNITYSDK_OFFSET(0xB291040)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_REMOVE_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0xB290080)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_REPORTEREVENT_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0xB28FFD0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_REPORTEREVENT_DATAFULLED_OFFSET UNITYSDK_OFFSET(0xB28FFC0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_TOTALMILLISECONDSFORSTAGE_OFFSET UNITYSDK_OFFSET(0xB291190)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_TOTALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xB2915A0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB291820)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB291790)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int PerformanceReporter_TypeDefinitionIndex = 47102;

	class PerformanceReporter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ReporterUtil::PerformanceReporter** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ReporterUtil::PerformanceReporter**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReporter_TypeDefinitionIndex)->GetStaticField(0x591A0);
		}
		::MiHoYo::SDK::ReporterUtil::PerformanceReporter_AutoReportHandler* onAutoReport; // 0x10
		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* lastOperatedItem; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>*>* events; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>* EventsDic(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_EVENTSDIC_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterEvent* Event(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>* a2)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterEvent*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_EVENT_OFFSET))(this, a1, a2);
		}

		::System::Void ReporterEvent_DataFulled(::MiHoYo::SDK::ReporterUtil::ReporterEvent* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_REPORTEREVENT_DATAFULLED_OFFSET))(this, a1, a2);
		}

		::System::Void ReporterEvent_AutoReport(::MiHoYo::SDK::ReporterUtil::ReporterEvent* a1, ::System::String* a2, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_REPORTEREVENT_AUTOREPORT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void add_AutoReport(::MiHoYo::SDK::ReporterUtil::PerformanceReporter_AutoReportHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::PerformanceReporter_AutoReportHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_ADD_AUTOREPORT_OFFSET))(this, a1);
		}

		::System::Void remove_AutoReport(::MiHoYo::SDK::ReporterUtil::PerformanceReporter_AutoReportHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::PerformanceReporter_AutoReportHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_REMOVE_AUTOREPORT_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterEvent* Event_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterEvent*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_EVENT_1_OFFSET))(this, a1, a2);
		}

		::System::Void ClearData(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_CLEARDATA_OFFSET))(this, a1, a2);
		}

		::System::Void ClearAllEventsWithEventName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_CLEARALLEVENTSWITHEVENTNAME_OFFSET))(this, a1);
		}

		::System::Void ClearEventsDictionary(::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_CLEAREVENTSDICTIONARY_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::ReporterUtil::PerformanceReporter* DoAtSameTime(::MiHoYo::SDK::ReporterUtil::ReporterDataItem* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::MiHoYo::SDK::ReporterUtil::PerformanceReporter*(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_DOATSAMETIME_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::ReporterUtil::PerformanceReporter* DoAtSameTime_1(::System::String* a1, ::System::String* a2)
		{
			return ((::MiHoYo::SDK::ReporterUtil::PerformanceReporter*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_DOATSAMETIME_1_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* Begin(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Nullable_1<::System::DateTime> a4)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_BEGIN_OFFSET))(this, a1, a2, a3, a4);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* End(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Nullable_1<::System::DateTime> a4)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_END_OFFSET))(this, a1, a2, a3, a4);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* Item(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_ITEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* LastItemPreferEnded(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_LASTITEMPREFERENDED_OFFSET))(this, a1, a2, a3);
		}

		::System::Int64 TotalMillisecondsForStage(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_TOTALMILLISECONDSFORSTAGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int64 TotalMilliseconds(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_TOTALMILLISECONDS_OFFSET))(this, a1, a2);
		}
	};
}
