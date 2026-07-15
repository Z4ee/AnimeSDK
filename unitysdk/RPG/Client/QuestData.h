#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_26.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_590EC2E573209D50;
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class FinishWayRow; }
namespace RPG::GameCore { class QuestDataRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_QUESTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x16787A20)
#define RPG_CLIENT_QUESTDATA_GETRECORD_OFFSET UNITYSDK_OFFSET(0x16787DE0)
#define RPG_CLIENT_QUESTDATA_GETSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x16787CD0)
#define RPG_CLIENT_QUESTDATA_GET_DATAROW_OFFSET UNITYSDK_OFFSET(0x16788060)
#define RPG_CLIENT_QUESTDATA_GET_FINISHTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x167881C0)
#define RPG_CLIENT_QUESTDATA_GET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0x16788080)
#define RPG_CLIENT_QUESTDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x167881E0)
#define RPG_CLIENT_QUESTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x16788040)
#define RPG_CLIENT_QUESTDATA_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x16788160)
#define RPG_CLIENT_QUESTDATA_GET_QUESTTITLE_OFFSET UNITYSDK_OFFSET(0x167880F0)
#define RPG_CLIENT_QUESTDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x167880A0)
#define RPG_CLIENT_QUESTDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x167881A0)
#define RPG_CLIENT_QUESTDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x16788180)
#define RPG_CLIENT_QUESTDATA_SET_DATAROW_OFFSET UNITYSDK_OFFSET(0x16788070)
#define RPG_CLIENT_QUESTDATA_SET_FINISHTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x167881D0)
#define RPG_CLIENT_QUESTDATA_SET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0x16788090)
#define RPG_CLIENT_QUESTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x16788050)
#define RPG_CLIENT_QUESTDATA_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x16788170)
#define RPG_CLIENT_QUESTDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x167881B0)
#define RPG_CLIENT_QUESTDATA_SET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x16788190)
#define RPG_CLIENT_QUESTDATA_SYNCQUESTDATA_OFFSET UNITYSDK_OFFSET(0x16787C60)
#define RPG_CLIENT_QUESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16787C50)

namespace RPG::Client
{
	inline static constexpr unsigned int QuestData_TypeDefinitionIndex = 63779;

	class QuestData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _Records; // 0x10
		::RPG::GameCore::FinishWayRow* _FinishWayRow_k__BackingField; // 0x18
		::RPG::GameCore::QuestDataRow* _DataRow_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::UInt32 _TotalProgress_k__BackingField; // 0x2C
		::System::UInt32 _Progress_k__BackingField; // 0x30
		::Enum_3_4608E37A1B3D374A_26 _Status_k__BackingField; // 0x34
		::System::Int64 _FinishTimeStamp_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::QuestData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SyncQuestData(::Class_1_590EC2E573209D50* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_590EC2E573209D50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SYNCQUESTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* GetScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GETSCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 GetRecord(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GETRECORD_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::QuestDataRow* get_DataRow()
		{
			return ((::RPG::GameCore::QuestDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_DATAROW_OFFSET))(this);
		}

		::System::Void set_DataRow(::RPG::GameCore::QuestDataRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::QuestDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_DATAROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::FinishWayRow* get_FinishWayRow()
		{
			return ((::RPG::GameCore::FinishWayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_FINISHWAYROW_OFFSET))(this);
		}

		::System::Void set_FinishWayRow(::RPG::GameCore::FinishWayRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FinishWayRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_FINISHWAYROW_OFFSET))(this, a1);
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

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_PROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Void set_TotalProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_TOTALPROGRESS_OFFSET))(this, a1);
		}

		::Enum_3_4608E37A1B3D374A_26 get_Status()
		{
			return ((::Enum_3_4608E37A1B3D374A_26(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_4608E37A1B3D374A_26 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_26))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Int64 get_FinishTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_FINISHTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_FinishTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_SET_FINISHTIMESTAMP_OFFSET))(this, a1);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTDATA_GET_GOTOID_OFFSET))(this);
		}
	};
}
