#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LightConeRewardGotoStatus.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_643;
class Class_0_16E4307DCC419505_644;
namespace RPG::Client { class ActivityLightConeMissionCondition; }
namespace RPG::Client { class ActivityLightConeQuestCondition; }
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_ADDREWARDGROUP_OFFSET UNITYSDK_OFFSET(0xB6F6710)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xB6F6490)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_GOTOCONFIG_OFFSET UNITYSDK_OFFSET(0xB6F6800)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_GOTOSTATUS_OFFSET UNITYSDK_OFFSET(0xB6F6610)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEID_OFFSET UNITYSDK_OFFSET(0xB6F64E0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEMISSION_OFFSET UNITYSDK_OFFSET(0xB6F64A0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEQUEST_OFFSET UNITYSDK_OFFSET(0xB6F6810)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEREWARDGROUPS_OFFSET UNITYSDK_OFFSET(0xB6F6470)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_RELATIVEMAINMISSION_OFFSET UNITYSDK_OFFSET(0xB6F64C0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_UNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB6F6480)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xB6F5B10)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_HASTAKEALLREWARD_OFFSET UNITYSDK_OFFSET(0xB6F5D60)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SETNOWPROGRESSNUM_OFFSET UNITYSDK_OFFSET(0xB6F5FC0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_LIGHTCONEMISSION_OFFSET UNITYSDK_OFFSET(0xB6F64B0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_LIGHTCONEQUEST_OFFSET UNITYSDK_OFFSET(0xB6F6820)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_RELATIVEMAINMISSION_OFFSET UNITYSDK_OFFSET(0xB6F64D0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_TAKEMAINREWARD_OFFSET UNITYSDK_OFFSET(0xB6F6420)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_TAKESECONDARYREWARDS_OFFSET UNITYSDK_OFFSET(0xB6F6180)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB6F59A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonActivityLightConeRewardData_TypeDefinitionIndex = 57667;

	class CommonActivityLightConeRewardData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityLightConeMissionCondition* _LightConeMission_k__BackingField; // 0x10
		::RPG::Client::ScheduleData* _UnlockSchedule_k__BackingField; // 0x18
		::RPG::Client::ActivityLightConeQuestCondition* _LightConeQuest_k__BackingField; // 0x20
		::Class_0_16E4307DCC419505_643* _GotoConfig_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_644*>* _LightConeRewardGroups; // 0x30
		::System::UInt32 _ActivityModuleID_k__BackingField; // 0x38
		::System::UInt32 _RelativeMainMission_k__BackingField; // 0x3C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean HasTakeAllReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_HASTAKEALLREWARD_OFFSET))(this);
		}

		::System::Void SetNowProgressNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SETNOWPROGRESSNUM_OFFSET))(this, a1);
		}

		::System::Boolean TakeSecondaryRewards()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_TAKESECONDARYREWARDS_OFFSET))(this);
		}

		::System::Void TakeMainReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_TAKEMAINREWARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_644*>* get_LightConeRewardGroups()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_644*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEREWARDGROUPS_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_UnlockSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_UNLOCKSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::RPG::Client::ActivityLightConeMissionCondition* get_LightConeMission()
		{
			return ((::RPG::Client::ActivityLightConeMissionCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEMISSION_OFFSET))(this);
		}

		::System::Void set_LightConeMission(::RPG::Client::ActivityLightConeMissionCondition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityLightConeMissionCondition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_LIGHTCONEMISSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_RelativeMainMission()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_RELATIVEMAINMISSION_OFFSET))(this);
		}

		::System::Void set_RelativeMainMission(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_RELATIVEMAINMISSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_LightConeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEID_OFFSET))(this);
		}

		::RPG::Client::LightConeRewardGotoStatus get_GotoStatus()
		{
			return ((::RPG::Client::LightConeRewardGotoStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_GOTOSTATUS_OFFSET))(this);
		}

		::System::Void AddRewardGroup(::Class_0_16E4307DCC419505_644* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_644*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_ADDREWARDGROUP_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_643* get_GotoConfig()
		{
			return ((::Class_0_16E4307DCC419505_643*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_GOTOCONFIG_OFFSET))(this);
		}

		::RPG::Client::ActivityLightConeQuestCondition* get_LightConeQuest()
		{
			return ((::RPG::Client::ActivityLightConeQuestCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEQUEST_OFFSET))(this);
		}

		::System::Void set_LightConeQuest(::RPG::Client::ActivityLightConeQuestCondition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityLightConeQuestCondition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_LIGHTCONEQUEST_OFFSET))(this, a1);
		}
	};
}
