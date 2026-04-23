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

#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_ADD_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0x8DAA210)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_BEGIN_OFFSET UNITYSDK_OFFSET(0x8DAA8A0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_CLEARALLEVENTSWITHEVENTNAME_OFFSET UNITYSDK_OFFSET(0x8DAA490)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x8DAA300)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_CLEAREVENTSDICTIONARY_OFFSET UNITYSDK_OFFSET(0x8DAA340)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_DOATSAMETIME_1_OFFSET UNITYSDK_OFFSET(0x8DAAA70)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_DOATSAMETIME_OFFSET UNITYSDK_OFFSET(0x8DAA7E0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_END_OFFSET UNITYSDK_OFFSET(0x8DAA950)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_EVENTSDIC_OFFSET UNITYSDK_OFFSET(0x8DA9710)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_EVENT_1_OFFSET UNITYSDK_OFFSET(0x8DAA2D0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_EVENT_OFFSET UNITYSDK_OFFSET(0x8DA98A0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_ITEM_OFFSET UNITYSDK_OFFSET(0x8DAACC0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_LASTITEMPREFERENDED_OFFSET UNITYSDK_OFFSET(0x8DAAEB0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_REMOVE_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0x8DAA270)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_REPORTEREVENT_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0x8DA9BC0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_REPORTEREVENT_DATAFULLED_OFFSET UNITYSDK_OFFSET(0x8DA9BB0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_TOTALMILLISECONDSFORSTAGE_OFFSET UNITYSDK_OFFSET(0x8DAB030)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_TOTALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x8DAB450)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DAB670)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER__CTOR_OFFSET UNITYSDK_OFFSET(0x8DAB5E0)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int PerformanceReporter_TypeDefinitionIndex = 43201;

	class PerformanceReporter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ReporterUtil::PerformanceReporter** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ReporterUtil::PerformanceReporter**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReporter_TypeDefinitionIndex)->GetStaticField(0x521C0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>*>* events; // 0x10
		::MiHoYo::SDK::ReporterUtil::PerformanceReporter_AutoReportHandler* onAutoReport; // 0x18
		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* lastOperatedItem; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>* EventsDic(::System::Int32 eventOwnerId)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_EVENTSDIC_OFFSET))(this, eventOwnerId);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterEvent* Event(::System::String* eventName, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>* eventsDic)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterEvent*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_EVENT_OFFSET))(this, eventName, eventsDic);
		}

		::System::Void ReporterEvent_DataFulled(::MiHoYo::SDK::ReporterUtil::ReporterEvent* sender, ::System::String* stageName)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_REPORTEREVENT_DATAFULLED_OFFSET))(this, sender, stageName);
		}

		::System::Void ReporterEvent_AutoReport(::MiHoYo::SDK::ReporterUtil::ReporterEvent* sender, ::System::String* stageName, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_REPORTEREVENT_AUTOREPORT_OFFSET))(this, sender, stageName, result);
		}

		::System::Void add_AutoReport(::MiHoYo::SDK::ReporterUtil::PerformanceReporter_AutoReportHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::PerformanceReporter_AutoReportHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_ADD_AUTOREPORT_OFFSET))(this, value);
		}

		::System::Void remove_AutoReport(::MiHoYo::SDK::ReporterUtil::PerformanceReporter_AutoReportHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::PerformanceReporter_AutoReportHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_REMOVE_AUTOREPORT_OFFSET))(this, value);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterEvent* Event_1(::System::String* eventName, ::System::Int32 eventOwnerId)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterEvent*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_EVENT_1_OFFSET))(this, eventName, eventOwnerId);
		}

		::System::Void ClearData(::System::String* eventName, ::System::Int32 eventOwnerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_CLEARDATA_OFFSET))(this, eventName, eventOwnerId);
		}

		::System::Void ClearAllEventsWithEventName(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_CLEARALLEVENTSWITHEVENTNAME_OFFSET))(this, eventName);
		}

		::System::Void ClearEventsDictionary(::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>* dic, ::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_CLEAREVENTSDICTIONARY_OFFSET))(this, dic, eventName);
		}

		::MiHoYo::SDK::ReporterUtil::PerformanceReporter* DoAtSameTime(::MiHoYo::SDK::ReporterUtil::ReporterDataItem* data, ::System::String* eventName, ::System::String* stageName)
		{
			return ((::MiHoYo::SDK::ReporterUtil::PerformanceReporter*(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_DOATSAMETIME_OFFSET))(this, data, eventName, stageName);
		}

		::MiHoYo::SDK::ReporterUtil::PerformanceReporter* DoAtSameTime_1(::System::String* eventName, ::System::String* stageName)
		{
			return ((::MiHoYo::SDK::ReporterUtil::PerformanceReporter*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_DOATSAMETIME_1_OFFSET))(this, eventName, stageName);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* Begin(::System::String* eventName, ::System::String* stageName, ::System::Int32 eventOwnerId, ::System::Nullable_1<::System::DateTime> utcTime)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_BEGIN_OFFSET))(this, eventName, stageName, eventOwnerId, utcTime);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* End(::System::String* eventName, ::System::String* stageName, ::System::Int32 eventOwnerId, ::System::Nullable_1<::System::DateTime> utcTime)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_END_OFFSET))(this, eventName, stageName, eventOwnerId, utcTime);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* Item(::System::String* eventName, ::System::String* stageName, ::System::Int32 index, ::System::Int32 eventOwnerId)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_ITEM_OFFSET))(this, eventName, stageName, index, eventOwnerId);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* LastItemPreferEnded(::System::String* eventName, ::System::String* stageName, ::System::Int32 eventOwnerId)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_LASTITEMPREFERENDED_OFFSET))(this, eventName, stageName, eventOwnerId);
		}

		::System::Int64 TotalMillisecondsForStage(::System::String* eventName, ::System::String* stageName, ::System::Int32 eventOwnerId)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_TOTALMILLISECONDSFORSTAGE_OFFSET))(this, eventName, stageName, eventOwnerId);
		}

		::System::Int64 TotalMilliseconds(::System::String* eventName, ::System::Int32 eventOwnerId)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_TOTALMILLISECONDS_OFFSET))(this, eventName, eventOwnerId);
		}
	};
}
