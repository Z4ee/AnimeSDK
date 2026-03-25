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

#define RPG_CLIENT_ACTIVITYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8EFCEC0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x8EFD010)
#define RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYMODULEIDLIST_OFFSET UNITYSDK_OFFSET(0x8EFD070)
#define RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x8EFDE70)
#define RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYPANELID_OFFSET UNITYSDK_OFFSET(0x8EFD030)
#define RPG_CLIENT_ACTIVITYDATA_GET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0x8EFE070)
#define RPG_CLIENT_ACTIVITYDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x8EFDFF0)
#define RPG_CLIENT_ACTIVITYDATA_GET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x8EFD090)
#define RPG_CLIENT_ACTIVITYDATA_GET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x8EFE210)
#define RPG_CLIENT_ACTIVITYDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x8EFE190)
#define RPG_CLIENT_ACTIVITYDATA_GET_HASPANEL_OFFSET UNITYSDK_OFFSET(0x8EFE3D0)
#define RPG_CLIENT_ACTIVITYDATA_GET_HASRESIDENT_OFFSET UNITYSDK_OFFSET(0x8EFD6E0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISEARLYACCESSCANUNLOCK_OFFSET UNITYSDK_OFFSET(0x8EFE430)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x8EFDDD0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISINRESIDENTSCHEDULE_OFFSET UNITYSDK_OFFSET(0x8EFD820)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x8EFDCD0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISINTIMELIMITSCHEDULE_OFFSET UNITYSDK_OFFSET(0x8EFD2F0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISNOTSTART_OFFSET UNITYSDK_OFFSET(0x8EFDD30)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISRESIDENTSCHEDULEEXPIRED_OFFSET UNITYSDK_OFFSET(0x8EFDAE0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISRESIDENTSCHEDULENOTSTART_OFFSET UNITYSDK_OFFSET(0x8EFD8F0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISTIMELIMITSCHEDULEEXPIRED_OFFSET UNITYSDK_OFFSET(0x8EFD540)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISTIMELIMITSCHEDULENOTSTART_OFFSET UNITYSDK_OFFSET(0x8EFD3B0)
#define RPG_CLIENT_ACTIVITYDATA_GET_ISWORLDEARLYACCESSCANUNLOCK_OFFSET UNITYSDK_OFFSET(0x8EFE520)
#define RPG_CLIENT_ACTIVITYDATA_GET_PANELDATA_OFFSET UNITYSDK_OFFSET(0x8EFE330)
#define RPG_CLIENT_ACTIVITYDATA_GET_RESIDENTACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x8EFD150)
#define RPG_CLIENT_ACTIVITYDATA_GET_RESIDENTMODULELIST_OFFSET UNITYSDK_OFFSET(0x8EFD050)
#define RPG_CLIENT_ACTIVITYDATA_GET_RESIDENTSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x8EFD740)
#define RPG_CLIENT_ACTIVITYDATA_GET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x8EFE5D0)
#define RPG_CLIENT_ACTIVITYDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x8EFDF10)
#define RPG_CLIENT_ACTIVITYDATA_GET_TIMELIMITACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x8EFD0D0)
#define RPG_CLIENT_ACTIVITYDATA_GET_TIMELIMITSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x8EFD210)
#define RPG_CLIENT_ACTIVITYDATA_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0x8EFD0B0)
#define RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x8EFD020)
#define RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYMODULEIDLIST_OFFSET UNITYSDK_OFFSET(0x8EFD080)
#define RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYPANELID_OFFSET UNITYSDK_OFFSET(0x8EFD040)
#define RPG_CLIENT_ACTIVITYDATA_SET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x8EFD0A0)
#define RPG_CLIENT_ACTIVITYDATA_SET_RESIDENTMODULELIST_OFFSET UNITYSDK_OFFSET(0x8EFD060)
#define RPG_CLIENT_ACTIVITYDATA_SET_WORLDID_OFFSET UNITYSDK_OFFSET(0x8EFD0C0)
#define RPG_CLIENT_ACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8EFD000)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityData_TypeDefinitionIndex = 50046;

	class ActivityData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _ActivityModuleIDList_k__BackingField; // 0x10
		::Class_1_B664465BA0C38341* _RewardCountProxy; // 0x18
		::Il2CppArray<::System::UInt32>* _ResidentModuleList_k__BackingField; // 0x20
		::System::UInt32 _EarlyAccessContentID_k__BackingField; // 0x28
		::System::UInt32 _WorldID_k__BackingField; // 0x2C
		::System::UInt32 _ActivityPanelID_k__BackingField; // 0x30
		::System::UInt32 _ActivityID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityData* Create(::RPG::GameCore::ActivityConfigRow* row, ::Class_1_355D5C2B1D92981B* rewardCountProxyFactory)
		{
			return ((::RPG::Client::ActivityData*(*)(::RPG::GameCore::ActivityConfigRow*, ::Class_1_355D5C2B1D92981B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_CREATE_OFFSET))(row, rewardCountProxyFactory);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void set_ActivityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYID_OFFSET))(this, value);
		}

		::System::UInt32 get_ActivityPanelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYPANELID_OFFSET))(this);
		}

		::System::Void set_ActivityPanelID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYPANELID_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_ResidentModuleList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_RESIDENTMODULELIST_OFFSET))(this);
		}

		::System::Void set_ResidentModuleList(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_SET_RESIDENTMODULELIST_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_ActivityModuleIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_ACTIVITYMODULEIDLIST_OFFSET))(this);
		}

		::System::Void set_ActivityModuleIDList(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_SET_ACTIVITYMODULEIDLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_EarlyAccessContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_EARLYACCESSCONTENTID_OFFSET))(this);
		}

		::System::Void set_EarlyAccessContentID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_SET_EARLYACCESSCONTENTID_OFFSET))(this, value);
		}

		::System::UInt32 get_WorldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_GET_WORLDID_OFFSET))(this);
		}

		::System::Void set_WorldID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATA_SET_WORLDID_OFFSET))(this, value);
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
