#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityAetherDivideDataStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class AetherDivideActivityQuestRow; }

#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_CHECKISLOCKED_OFFSET UNITYSDK_OFFSET(0xC3B7200)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_CHECKUNLOCKCONDITION_OFFSET UNITYSDK_OFFSET(0xC3B72D0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC3B67E0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xC3B75D0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC3B7630)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_COMPLETEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xC3B78A0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC3B76B0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC3B6F40)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xC3B7880)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC3B77E0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xC3B71A0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC3B7730)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xC3B79B0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC3B6ED0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xC3B78C0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_TYPEGOURPID_OFFSET UNITYSDK_OFFSET(0xC3B7950)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_ISHAVINGCANTAKEREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xC3B6FE0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC3B7360)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_SETSEEN_OFFSET UNITYSDK_OFFSET(0xC3B6C00)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_SET_COMPLETEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xC3B78B0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xC3B7890)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_SET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xC3B79C0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC3B6F80)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xC3B6860)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B6850)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA__UPDATECOMPLETEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xC3B68B0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA__UPDATEISNEW_OFFSET UNITYSDK_OFFSET(0xC3B6A70)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityAetherDivideData_TypeDefinitionIndex = 61386;

	class ActivityAetherDivideData : public ::System::Object
	{
	public:
		::RPG::GameCore::AetherDivideActivityQuestRow* _Row; // 0x10
		::RPG::Client::ScheduleData* _ScheduleData_k__BackingField; // 0x18
		::System::Boolean _IsNew_k__BackingField; // 0x20
		::System::UInt32 _EndTimeStamp; // 0x24
		::System::UInt32 _ID; // 0x28
		::System::UInt32 UnlockID; // 0x2C
		::System::UInt32 _CompletedProgress_k__BackingField; // 0x30
		::System::UInt32 _BeginTimeStamp; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityAetherDivideData* Create(::System::UInt32 a1, ::RPG::Client::ScheduleData* a2)
		{
			return ((::RPG::Client::ActivityAetherDivideData*(*)(::System::UInt32, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_UPDATE_OFFSET))(this);
		}

		::System::Void SetSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_SETSEEN_OFFSET))(this);
		}

		::System::Void UpdateTimeStamp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_UPDATETIMESTAMP_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsHavingCanTakeRewardQuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_ISHAVINGCANTAKEREWARDQUEST_OFFSET))(this);
		}

		::System::Boolean CheckIsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_CHECKISLOCKED_OFFSET))(this);
		}

		::System::Boolean CheckUnlockCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_CHECKUNLOCKCONDITION_OFFSET))(this);
		}

		::System::Boolean IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Void _UpdateCompletedProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA__UPDATECOMPLETEDPROGRESS_OFFSET))(this);
		}

		::System::Void _UpdateIsNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA__UPDATEISNEW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::AetherDivideActivityQuestRow* get_Row()
		{
			return ((::RPG::GameCore::AetherDivideActivityQuestRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_ROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_QuestIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_QUESTIDLIST_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_SET_ISNEW_OFFSET))(this, a1);
		}

		::System::UInt32 get_CompletedProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_COMPLETEDPROGRESS_OFFSET))(this);
		}

		::System::Void set_CompletedProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_SET_COMPLETEDPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::UInt32 get_TypeGourpID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_TYPEGOURPID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Void set_ScheduleData(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_SET_SCHEDULEDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::ActivityAetherDivideDataStatus get_Status()
		{
			return ((::RPG::Client::ActivityAetherDivideDataStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEDATA_GET_STATUS_OFFSET))(this);
		}
	};
}
