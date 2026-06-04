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

#define RPG_CLIENT_ACTIVITYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB0B04B0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xB0B0600)
#define RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYMODULEIDLIST_OFFSET UNITYSDK_OFFSET(0xB0B0660)
#define RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xB0B14B0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYPANELID_OFFSET UNITYSDK_OFFSET(0xB0B0620)
#define RPG_CLIENT_ACTIVITYDATA_GET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0xB0B16F0)
#define RPG_CLIENT_ACTIVITYDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB0B1670)
#define RPG_CLIENT_ACTIVITYDATA_GET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0xB0B0680)
#define RPG_CLIENT_ACTIVITYDATA_GET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0xB0B1890)
#define RPG_CLIENT_ACTIVITYDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB0B1810)
#define RPG_CLIENT_ACTIVITYDATA_GET_HASPANEL_OFFSET UNITYSDK_OFFSET(0xB0B1A50)
#define RPG_CLIENT_ACTIVITYDATA_GET_HASRESIDENT_OFFSET UNITYSDK_OFFSET(0xB0B0D30)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISEARLYACCESSCANUNLOCK_OFFSET UNITYSDK_OFFSET(0xB0B1AB0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xB0B1410)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISINRESIDENTSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB0B0E70)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB0B1310)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISINTIMELIMITSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB0B0940)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISNOTSTART_OFFSET UNITYSDK_OFFSET(0xB0B1370)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISRESIDENTSCHEDULEEXPIRED_OFFSET UNITYSDK_OFFSET(0xB0B1120)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISRESIDENTSCHEDULENOTSTART_OFFSET UNITYSDK_OFFSET(0xB0B0F40)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISTIMELIMITSCHEDULEEXPIRED_OFFSET UNITYSDK_OFFSET(0xB0B0B90)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISTIMELIMITSCHEDULENOTSTART_OFFSET UNITYSDK_OFFSET(0xB0B0A00)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISWORLDEARLYACCESSCANUNLOCK_OFFSET UNITYSDK_OFFSET(0xB0B1BA0)
#define RPG_CLIENT_ACTIVITYDATA_GET_PANELDATA_OFFSET UNITYSDK_OFFSET(0xB0B19B0)
#define RPG_CLIENT_ACTIVITYDATA_GET_RESIDENTACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xB0B0730)
#define RPG_CLIENT_ACTIVITYDATA_GET_RESIDENTMODULELIST_OFFSET UNITYSDK_OFFSET(0xB0B0640)
#define RPG_CLIENT_ACTIVITYDATA_GET_RESIDENTSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xB0B0D90)
#define RPG_CLIENT_ACTIVITYDATA_GET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xB0B1C50)
#define RPG_CLIENT_ACTIVITYDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xB0B1590)
#define RPG_CLIENT_ACTIVITYDATA_GET_TIMELIMITACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xB0B06C0)
#define RPG_CLIENT_ACTIVITYDATA_GET_TIMELIMITSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xB0B07E0)
#define RPG_CLIENT_ACTIVITYDATA_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0xB0B06A0)
#define RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xB0B0610)
#define RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYMODULEIDLIST_OFFSET UNITYSDK_OFFSET(0xB0B0670)
#define RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYPANELID_OFFSET UNITYSDK_OFFSET(0xB0B0630)
#define RPG_CLIENT_ACTIVITYDATA_SET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0xB0B0690)
#define RPG_CLIENT_ACTIVITYDATA_SET_RESIDENTMODULELIST_OFFSET UNITYSDK_OFFSET(0xB0B0650)
#define RPG_CLIENT_ACTIVITYDATA_SET_WORLDID_OFFSET UNITYSDK_OFFSET(0xB0B06B0)
#define RPG_CLIENT_ACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0B05F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityData_TypeDefinitionIndex = 57675;

	class ActivityData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _ResidentModuleList_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _ActivityModuleIDList_k__BackingField; // 0x18
		::Class_1_B664465BA0C38341* _RewardCountProxy; // 0x20
		::System::UInt32 _ActivityPanelID_k__BackingField; // 0x28
		::System::UInt32 _ActivityID_k__BackingField; // 0x2C
		::System::UInt32 _WorldID_k__BackingField; // 0x30
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
