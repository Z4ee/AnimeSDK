#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

class Class_1_355D5C2B1D92981B;
class Class_1_B664465BA0C38341;
namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ActivityRewardCountData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityConfigRow; }

#define RPG_CLIENT_ACTIVITYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AD37BE0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1AD37D30)
#define RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYMODULEIDLIST_OFFSET UNITYSDK_OFFSET(0x1AD37D90)
#define RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1AD38BE0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYPANELID_OFFSET UNITYSDK_OFFSET(0x1AD37D50)
#define RPG_CLIENT_ACTIVITYDATA_GET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0x1AD38E20)
#define RPG_CLIENT_ACTIVITYDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AD38DA0)
#define RPG_CLIENT_ACTIVITYDATA_GET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AD37DB0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x1AD38FC0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AD38F40)
#define RPG_CLIENT_ACTIVITYDATA_GET_HASPANEL_OFFSET UNITYSDK_OFFSET(0x1AD390E0)
#define RPG_CLIENT_ACTIVITYDATA_GET_HASRESIDENT_OFFSET UNITYSDK_OFFSET(0x1AD38460)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISEARLYACCESSCANUNLOCK_OFFSET UNITYSDK_OFFSET(0x1AD39140)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1AD38B40)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISINRESIDENTSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AD385A0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AD38A40)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISINTIMELIMITSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AD38070)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISNOTSTART_OFFSET UNITYSDK_OFFSET(0x1AD38AA0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISRESIDENTSCHEDULEEXPIRED_OFFSET UNITYSDK_OFFSET(0x1AD38850)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISRESIDENTSCHEDULENOTSTART_OFFSET UNITYSDK_OFFSET(0x1AD38670)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISTIMELIMITSCHEDULEEXPIRED_OFFSET UNITYSDK_OFFSET(0x1AD382C0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISTIMELIMITSCHEDULENOTSTART_OFFSET UNITYSDK_OFFSET(0x1AD38130)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISWORLDEARLYACCESSCANUNLOCK_OFFSET UNITYSDK_OFFSET(0x1AD392C0)
#define RPG_CLIENT_ACTIVITYDATA_GET_PANELDATA_OFFSET UNITYSDK_OFFSET(0x1AD0EAC0)
#define RPG_CLIENT_ACTIVITYDATA_GET_RESIDENTACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1AD37E60)
#define RPG_CLIENT_ACTIVITYDATA_GET_RESIDENTMODULELIST_OFFSET UNITYSDK_OFFSET(0x1AD37D70)
#define RPG_CLIENT_ACTIVITYDATA_GET_RESIDENTSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1AD384C0)
#define RPG_CLIENT_ACTIVITYDATA_GET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD393B0)
#define RPG_CLIENT_ACTIVITYDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1AD38CC0)
#define RPG_CLIENT_ACTIVITYDATA_GET_TIMELIMITACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1AD37DF0)
#define RPG_CLIENT_ACTIVITYDATA_GET_TIMELIMITSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1AD37F10)
#define RPG_CLIENT_ACTIVITYDATA_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0x1AD37DD0)
#define RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1AD37D40)
#define RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYMODULEIDLIST_OFFSET UNITYSDK_OFFSET(0x1AD37DA0)
#define RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYPANELID_OFFSET UNITYSDK_OFFSET(0x1AD37D60)
#define RPG_CLIENT_ACTIVITYDATA_SET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AD37DC0)
#define RPG_CLIENT_ACTIVITYDATA_SET_RESIDENTMODULELIST_OFFSET UNITYSDK_OFFSET(0x1AD37D80)
#define RPG_CLIENT_ACTIVITYDATA_SET_WORLDID_OFFSET UNITYSDK_OFFSET(0x1AD37DE0)
#define RPG_CLIENT_ACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD37D20)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityData_TypeDefinitionIndex = 61776;

	class ActivityData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _ActivityModuleIDList_k__BackingField; // 0x10
		::Class_1_B664465BA0C38341* _RewardCountProxy; // 0x18
		::Il2CppArray<::System::UInt32>* _ResidentModuleList_k__BackingField; // 0x20
		::System::UInt32 _WorldID_k__BackingField; // 0x28
		::System::UInt32 _ActivityPanelID_k__BackingField; // 0x2C
		::System::UInt32 _ActivityID_k__BackingField; // 0x30
		::System::UInt32 _EarlyAccessContentID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityData* Create(::RPG::GameCore::ActivityConfigRow* a1, ::Class_1_355D5C2B1D92981B* a2)
		{
			return ((::RPG::Client::ActivityData*(*)(::RPG::GameCore::ActivityConfigRow*, ::Class_1_355D5C2B1D92981B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void set_ActivityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityPanelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYPANELID_OFFSET))(this);
		}

		::System::Void set_ActivityPanelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYPANELID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ResidentModuleList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_RESIDENTMODULELIST_OFFSET))(this);
		}

		::System::Void set_ResidentModuleList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_SET_RESIDENTMODULELIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ActivityModuleIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYMODULEIDLIST_OFFSET))(this);
		}

		::System::Void set_ActivityModuleIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYMODULEIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_EarlyAccessContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_EARLYACCESSCONTENTID_OFFSET))(this);
		}

		::System::Void set_EarlyAccessContentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_SET_EARLYACCESSCONTENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_WORLDID_OFFSET))(this);
		}

		::System::Void set_WorldID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_SET_WORLDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TimeLimitActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_TIMELIMITACTIVITYMODULEID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_TimeLimitScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_TIMELIMITSCHEDULEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsInTimeLimitSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ISINTIMELIMITSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsTimeLimitScheduleNotStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ISTIMELIMITSCHEDULENOTSTART_OFFSET))(this);
		}

		::System::Boolean get_IsTimeLimitScheduleExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ISTIMELIMITSCHEDULEEXPIRED_OFFSET))(this);
		}

		::System::Boolean get_HasResident()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_HASRESIDENT_OFFSET))(this);
		}

		::System::UInt32 get_ResidentActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_RESIDENTACTIVITYMODULEID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ResidentScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_RESIDENTSCHEDULEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsInResidentSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ISINRESIDENTSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsResidentScheduleNotStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ISRESIDENTSCHEDULENOTSTART_OFFSET))(this);
		}

		::System::Boolean get_IsResidentScheduleExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ISRESIDENTSCHEDULEEXPIRED_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsNotStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ISNOTSTART_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_BeginTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_BEGINTIMEDATE_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_EndTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ENDTIMEDATE_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelData* get_PanelData()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_PANELDATA_OFFSET))(this);
		}

		::System::Boolean get_HasPanel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_HASPANEL_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccessCanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ISEARLYACCESSCANUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsWorldEarlyAccessCanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ISWORLDEARLYACCESSCANUNLOCK_OFFSET))(this);
		}

		::RPG::Client::ActivityRewardCountData* get_RewardCount()
		{
			return ((::RPG::Client::ActivityRewardCountData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_REWARDCOUNT_OFFSET))(this);
		}
	};
}
