#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F6A638FBAAEC90B_1;
namespace RPG::Client { class ActivityRebateTriggerData; }
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYREBATEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC59EDA0)
#define RPG_CLIENT_ACTIVITYREBATEDATA_GETREWARDSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xC59F530)
#define RPG_CLIENT_ACTIVITYREBATEDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xC59F620)
#define RPG_CLIENT_ACTIVITYREBATEDATA_GET_AVAILABLECOUNT_OFFSET UNITYSDK_OFFSET(0xC59F680)
#define RPG_CLIENT_ACTIVITYREBATEDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC59F700)
#define RPG_CLIENT_ACTIVITYREBATEDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC59F780)
#define RPG_CLIENT_ACTIVITYREBATEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC59F600)
#define RPG_CLIENT_ACTIVITYREBATEDATA_GET_ISINREWARDSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC59F6A0)
#define RPG_CLIENT_ACTIVITYREBATEDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xC59F660)
#define RPG_CLIENT_ACTIVITYREBATEDATA_GET_TRIGGERLIST_OFFSET UNITYSDK_OFFSET(0xC59F640)
#define RPG_CLIENT_ACTIVITYREBATEDATA_SET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xC59F630)
#define RPG_CLIENT_ACTIVITYREBATEDATA_SET_AVAILABLECOUNT_OFFSET UNITYSDK_OFFSET(0xC59F690)
#define RPG_CLIENT_ACTIVITYREBATEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC59F610)
#define RPG_CLIENT_ACTIVITYREBATEDATA_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xC59F670)
#define RPG_CLIENT_ACTIVITYREBATEDATA_SET_TRIGGERLIST_OFFSET UNITYSDK_OFFSET(0xC59F650)
#define RPG_CLIENT_ACTIVITYREBATEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC59EF60)
#define RPG_CLIENT_ACTIVITYREBATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC59EF50)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRebateData_TypeDefinitionIndex = 61899;

	class ActivityRebateData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityRebateTriggerData*>* _TriggerList_k__BackingField; // 0x10
		::System::UInt32 _AvailableCount_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x1C
		::System::UInt32 _RewardID_k__BackingField; // 0x20
		::System::UInt32 _ActivityModuleID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityRebateData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityRebateData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_7F6A638FBAAEC90B_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* GetRewardScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_GETREWARDSCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Void set_ActivityModuleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_SET_ACTIVITYMODULEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityRebateTriggerData*>* get_TriggerList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityRebateTriggerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_GET_TRIGGERLIST_OFFSET))(this);
		}

		::System::Void set_TriggerList(::System::Collections::Generic::List_1<::RPG::Client::ActivityRebateTriggerData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityRebateTriggerData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_SET_TRIGGERLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_SET_REWARDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvailableCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_GET_AVAILABLECOUNT_OFFSET))(this);
		}

		::System::Void set_AvailableCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_SET_AVAILABLECOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInRewardSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_GET_ISINREWARDSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREBATEDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}
	};
}
