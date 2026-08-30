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

#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ADD_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1C6B72E0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ADD_DATAFULLED_OFFSET UNITYSDK_OFFSET(0x1C6B7340)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_BEGINAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1C6BA6B0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_BEGIN_OFFSET UNITYSDK_OFFSET(0x1C6B7FB0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_CLEARDATASAFTERAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1C6BAE10)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_CREATEDATASEQUENCE_OFFSET UNITYSDK_OFFSET(0x1C6BA2C0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_DATASEQUENCE_FULLED_OFFSET UNITYSDK_OFFSET(0x1C6BA580)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_DURATIONBETWEENCURRENTITEMS_OFFSET UNITYSDK_OFFSET(0x1C6BA3C0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C6BA230)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1C6BA250)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1C6BA270)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_TOTALMILLISECONDSFORALLSTAGES_OFFSET UNITYSDK_OFFSET(0x1C6B89C0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_NEWSESSION_OFFSET UNITYSDK_OFFSET(0x1C6BA2A0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ONREPORTTIMER_OFFSET UNITYSDK_OFFSET(0x1C6BAC60)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REMOVE_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1C6BABA0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REMOVE_DATAFULLED_OFFSET UNITYSDK_OFFSET(0x1C6BAC00)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_RESETDATA_OFFSET UNITYSDK_OFFSET(0x1C6B7BE0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C6BA240)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1C6BA260)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1C6BA280)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STAGENAMES_OFFSET UNITYSDK_OFFSET(0x1C6BAFC0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STAGE_OFFSET UNITYSDK_OFFSET(0x1C6B8010)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STOPAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1C6BA8A0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B7280)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterEvent_TypeDefinitionIndex = 47112;

	class ReporterEvent : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_sharedSessionId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ReporterEvent_TypeDefinitionIndex)->GetStaticField(0x12AE0);
		}
		// static const ::System::String* DefaultStageName; // 0x0
		::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings* _Settings_k__BackingField; // 0x10
		::MiHoYo::SDK::ReporterUtil::DataFulledHandler* onDataFulled; // 0x18
		::MiHoYo::SDK::ReporterUtil::ReporterTimer* reportTimer; // 0x20
		::MiHoYo::SDK::ReporterUtil::AutoReportHandler* onAutoReport; // 0x28
		::System::String* _Name_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*>* datas; // 0x38
		::System::UInt32 _SessionId_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_NAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_SessionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_SESSIONID_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings* get_Settings()
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_SETTINGS_OFFSET))(this);
		}

		::System::Void set_Settings(::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent_ReporterEventSettings*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_SET_SETTINGS_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* Begin(::System::String* a1, ::System::Nullable_1<::System::DateTime> a2)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::String*, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_BEGIN_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* Stage(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STAGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int64 get_TotalMillisecondsForAllStages()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_GET_TOTALMILLISECONDSFORALLSTAGES_OFFSET))(this);
		}

		::System::Int64 DurationBetweenCurrentItems(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_DURATIONBETWEENCURRENTITEMS_OFFSET))(this, a1, a2);
		}

		::System::Void NewSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_NEWSESSION_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_RESETDATA_OFFSET))(this);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* CreateDataSequence(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_CREATEDATASEQUENCE_OFFSET))(this, a1, a2);
		}

		::System::Void DataSequence_Fulled(::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_DATASEQUENCE_FULLED_OFFSET))(this, a1);
		}

		::System::Void BeginAutoReport(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_BEGINAUTOREPORT_OFFSET))(this, a1);
		}

		::System::Void StopAutoReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_STOPAUTOREPORT_OFFSET))(this);
		}

		::System::Void add_AutoReport(::MiHoYo::SDK::ReporterUtil::AutoReportHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::AutoReportHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ADD_AUTOREPORT_OFFSET))(this, a1);
		}

		::System::Void remove_AutoReport(::MiHoYo::SDK::ReporterUtil::AutoReportHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::AutoReportHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REMOVE_AUTOREPORT_OFFSET))(this, a1);
		}

		::System::Void add_DataFulled(::MiHoYo::SDK::ReporterUtil::DataFulledHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::DataFulledHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ADD_DATAFULLED_OFFSET))(this, a1);
		}

		::System::Void remove_DataFulled(::MiHoYo::SDK::ReporterUtil::DataFulledHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::DataFulledHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_REMOVE_DATAFULLED_OFFSET))(this, a1);
		}

		::System::Void OnReportTimer(::System::Object* a1, ::System::Timers::ElapsedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTEREVENT_ONREPORTTIMER_OFFSET))(this, a1, a2);
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
