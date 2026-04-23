#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_23.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7FCED7C391FCF2F8;
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class FinishWayRow; }
namespace RPG::GameCore { class QuestDataRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_QUESTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAF37730)
#define RPG_CLIENT_QUESTDATA_GETRECORD_OFFSET UNITYSDK_OFFSET(0xAF37B20)
#define RPG_CLIENT_QUESTDATA_GETSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xAF37A10)
#define RPG_CLIENT_QUESTDATA_GET_DATAROW_OFFSET UNITYSDK_OFFSET(0xAF37D00)
#define RPG_CLIENT_QUESTDATA_GET_FINISHTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xAF37DF0)
#define RPG_CLIENT_QUESTDATA_GET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0xAF37D20)
#define RPG_CLIENT_QUESTDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xAF37E10)
#define RPG_CLIENT_QUESTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xAF37CE0)
#define RPG_CLIENT_QUESTDATA_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xAF37D90)
#define RPG_CLIENT_QUESTDATA_GET_QUESTTITLE_OFFSET UNITYSDK_OFFSET(0xAF37D60)
#define RPG_CLIENT_QUESTDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xAF37D40)
#define RPG_CLIENT_QUESTDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xAF37DD0)
#define RPG_CLIENT_QUESTDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xAF37DB0)
#define RPG_CLIENT_QUESTDATA_SET_DATAROW_OFFSET UNITYSDK_OFFSET(0xAF37D10)
#define RPG_CLIENT_QUESTDATA_SET_FINISHTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xAF37E00)
#define RPG_CLIENT_QUESTDATA_SET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0xAF37D30)
#define RPG_CLIENT_QUESTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xAF37CF0)
#define RPG_CLIENT_QUESTDATA_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xAF37DA0)
#define RPG_CLIENT_QUESTDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xAF37DE0)
#define RPG_CLIENT_QUESTDATA_SET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xAF37DC0)
#define RPG_CLIENT_QUESTDATA_SYNCQUESTDATA_OFFSET UNITYSDK_OFFSET(0xAF379A0)
#define RPG_CLIENT_QUESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAF37990)

namespace RPG::Client
{
	inline static constexpr unsigned int QuestData_TypeDefinitionIndex = 61480;

	class QuestData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _Records; // 0x10
		::RPG::GameCore::QuestDataRow* _DataRow_k__BackingField; // 0x18
		::RPG::GameCore::FinishWayRow* _FinishWayRow_k__BackingField; // 0x20
		::System::Int64 _FinishTimeStamp_k__BackingField; // 0x28
		::System::UInt32 _TotalProgress_k__BackingField; // 0x30
		::System::UInt32 _Progress_k__BackingField; // 0x34
		::System::UInt32 _ID_k__BackingField; // 0x38
		::Enum_3_4608E37A1B3D374A_23 _Status_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::QuestData* Create(::System::UInt32 questID)
		{
			return ((::RPG::Client::QuestData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_CREATE_OFFSET))(questID);
		}

		::System::Void SyncQuestData(::Class_1_7FCED7C391FCF2F8* quest)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FCED7C391FCF2F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SYNCQUESTDATA_OFFSET))(this, quest);
		}

		::RPG::Client::ScheduleData* GetScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GETSCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 GetRecord(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GETRECORD_OFFSET))(this, index);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::QuestDataRow* get_DataRow()
		{
			return ((::RPG::GameCore::QuestDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_DATAROW_OFFSET))(this);
		}

		::System::Void set_DataRow(::RPG::GameCore::QuestDataRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::QuestDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_DATAROW_OFFSET))(this, value);
		}

		::RPG::GameCore::FinishWayRow* get_FinishWayRow()
		{
			return ((::RPG::GameCore::FinishWayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_FINISHWAYROW_OFFSET))(this);
		}

		::System::Void set_FinishWayRow(::RPG::GameCore::FinishWayRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FinishWayRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_FINISHWAYROW_OFFSET))(this, value);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_REWARDID_OFFSET))(this);
		}

		::RPG::Client::TextID get_QuestTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_QUESTTITLE_OFFSET))(this);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_PROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Void set_TotalProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_TOTALPROGRESS_OFFSET))(this, value);
		}

		::Enum_3_4608E37A1B3D374A_23 get_Status()
		{
			return ((::Enum_3_4608E37A1B3D374A_23(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_4608E37A1B3D374A_23 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_23))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::Int64 get_FinishTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_FINISHTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_FinishTimeStamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_FINISHTIMESTAMP_OFFSET))(this, value);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_GOTOID_OFFSET))(this);
		}
	};
}
