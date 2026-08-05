#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::ReporterUtil { class AutoReportHandler; }
namespace MiHoYo::SDK::ReporterUtil { class DataFulledHandler; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterDataItem; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterDataSequence; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterEvent_ReporterEventSettings; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterTimer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Timers { class ElapsedEventArgs; }

#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ADD_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1CC5CB60)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ADD_DATAFULLED_OFFSET UNITYSDK_OFFSET(0x1CC5CC40)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_BEGINAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1CC5C9F0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_BEGIN_OFFSET UNITYSDK_OFFSET(0x1CC5C320)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_CLEARDATASAFTERAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1CC5CEC0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_CREATEDATASEQUENCE_OFFSET UNITYSDK_OFFSET(0x1CC5C4F0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_DATASEQUENCE_FULLED_OFFSET UNITYSDK_OFFSET(0x1CC5C8C0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_DURATIONBETWEENCURRENTITEMS_OFFSET UNITYSDK_OFFSET(0x1CC5C730)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC5C240)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1CC5C260)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1CC5C280)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_TOTALMILLISECONDSFORALLSTAGES_OFFSET UNITYSDK_OFFSET(0x1CC5C5E0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_NEWSESSION_OFFSET UNITYSDK_OFFSET(0x1CC5C300)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ONREPORTTIMER_OFFSET UNITYSDK_OFFSET(0x1CC5CD20)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REMOVE_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1CC5CBD0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REMOVE_DATAFULLED_OFFSET UNITYSDK_OFFSET(0x1CC5CCB0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_RESETDATA_OFFSET UNITYSDK_OFFSET(0x1CC5C7B0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC5C250)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1CC5C270)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1CC5C290)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STAGENAMES_OFFSET UNITYSDK_OFFSET(0x1CC5D000)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STAGE_OFFSET UNITYSDK_OFFSET(0x1CC5C380)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STOPAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1CC5CB50)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC5C2A0)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterEvent_TypeDefinitionIndex = 37682;

	class ReporterEvent : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_sharedSessionId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ReporterEvent_TypeDefinitionIndex)->GetStaticField(0x88E0);
		}
		// static const ::System::String* DefaultStageName; // 0x0
		::MiHoYo::SDK::ReporterUtil::ReporterTimer* reportTimer; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::MiHoYo::SDK::ReporterUtil::DataFulledHandler* onDataFulled; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*>* datas; // 0x28
		::MiHoYo::SDK::ReporterUtil::AutoReportHandler* onAutoReport; // 0x30
		::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings* _Settings_k__BackingField; // 0x38
		::System::UInt32 _SessionId_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt32 get_SessionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_SESSIONID_OFFSET))(this, value);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings* get_Settings()
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_SETTINGS_OFFSET))(this);
		}

		::System::Void set_Settings(::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_SETTINGS_OFFSET))(this, value);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* Begin(::System::String* stageName, ::System::Nullable_1<::System::DateTime> utcTime)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::String*, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_BEGIN_OFFSET))(this, stageName, utcTime);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* Stage(::System::String* stageName, ::System::Boolean createIfNone, ::System::Boolean ascendingAnalyze, ::System::Int32 maxCount)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STAGE_OFFSET))(this, stageName, createIfNone, ascendingAnalyze, maxCount);
		}

		::System::Int64 get_TotalMillisecondsForAllStages()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_TOTALMILLISECONDSFORALLSTAGES_OFFSET))(this);
		}

		::System::Int64 DurationBetweenCurrentItems(::System::String* stage1Name, ::System::String* stage2Name)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_DURATIONBETWEENCURRENTITEMS_OFFSET))(this, stage1Name, stage2Name);
		}

		::System::Void NewSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_NEWSESSION_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_RESETDATA_OFFSET))(this);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* CreateDataSequence(::System::Boolean ascendingAnalyze, ::System::Int32 maxCount)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_CREATEDATASEQUENCE_OFFSET))(this, ascendingAnalyze, maxCount);
		}

		::System::Void DataSequence_Fulled(::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* sender)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_DATASEQUENCE_FULLED_OFFSET))(this, sender);
		}

		::System::Void BeginAutoReport(::System::Int64 milliSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_BEGINAUTOREPORT_OFFSET))(this, milliSeconds);
		}

		::System::Void StopAutoReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STOPAUTOREPORT_OFFSET))(this);
		}

		::System::Void add_AutoReport(::MiHoYo::SDK::ReporterUtil::AutoReportHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::AutoReportHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ADD_AUTOREPORT_OFFSET))(this, value);
		}

		::System::Void remove_AutoReport(::MiHoYo::SDK::ReporterUtil::AutoReportHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::AutoReportHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REMOVE_AUTOREPORT_OFFSET))(this, value);
		}

		::System::Void add_DataFulled(::MiHoYo::SDK::ReporterUtil::DataFulledHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::DataFulledHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ADD_DATAFULLED_OFFSET))(this, value);
		}

		::System::Void remove_DataFulled(::MiHoYo::SDK::ReporterUtil::DataFulledHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::DataFulledHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REMOVE_DATAFULLED_OFFSET))(this, value);
		}

		::System::Void OnReportTimer(::System::Object* sender, ::System::Timers::ElapsedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ONREPORTTIMER_OFFSET))(this, sender, e);
		}

		::Il2CppArray<::System::String*>* StageNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STAGENAMES_OFFSET))(this);
		}

		::System::Void ClearDatasAfterAutoReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_CLEARDATASAFTERAUTOREPORT_OFFSET))(this);
		}
	};
}
