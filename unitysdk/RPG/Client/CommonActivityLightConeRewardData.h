#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LightConeRewardGotoStatus.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_717;
class Class_0_16E4307DCC419505_718;
namespace RPG::Client { class ActivityLightConeMissionCondition; }
namespace RPG::Client { class ActivityLightConeQuestCondition; }
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_ADDREWARDGROUP_OFFSET UNITYSDK_OFFSET(0x1A27F060)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1A27EE50)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_GOTOCONFIG_OFFSET UNITYSDK_OFFSET(0x1A27F150)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_GOTOSTATUS_OFFSET UNITYSDK_OFFSET(0x1A27EF60)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEID_OFFSET UNITYSDK_OFFSET(0x1A27EEA0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEMISSION_OFFSET UNITYSDK_OFFSET(0x1A27EE60)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEQUEST_OFFSET UNITYSDK_OFFSET(0x1A27F160)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEREWARDGROUPS_OFFSET UNITYSDK_OFFSET(0x1A27EE00)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_RELATIVEMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1A27EE80)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_UNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1A27EE40)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1A27E350)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_HASTAKEALLREWARD_OFFSET UNITYSDK_OFFSET(0x1A27E5F0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SETNOWPROGRESSNUM_OFFSET UNITYSDK_OFFSET(0x1A27E8B0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_LIGHTCONEMISSION_OFFSET UNITYSDK_OFFSET(0x1A27EE70)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_LIGHTCONEQUEST_OFFSET UNITYSDK_OFFSET(0x1A27F170)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_SET_RELATIVEMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1A27EE90)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_TAKEMAINREWARD_OFFSET UNITYSDK_OFFSET(0x1A27EDB0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_TAKESECONDARYREWARDS_OFFSET UNITYSDK_OFFSET(0x1A27EA70)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A27E1E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonActivityLightConeRewardData_TypeDefinitionIndex = 61768;

	class CommonActivityLightConeRewardData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_717*>* _LightConeRewardGroups; // 0x10
		::RPG::Client::ActivityLightConeQuestCondition* _LightConeQuest_k__BackingField; // 0x18
		::RPG::Client::ScheduleData* _UnlockSchedule_k__BackingField; // 0x20
		::RPG::Client::ActivityLightConeMissionCondition* _LightConeMission_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_718* _GotoConfig_k__BackingField; // 0x30
		::System::UInt32 _RelativeMainMission_k__BackingField; // 0x38
		::System::UInt32 _ActivityModuleID_k__BackingField; // 0x3C

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

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_717*>* get_LightConeRewardGroups()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_717*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_LIGHTCONEREWARDGROUPS_OFFSET))(this);
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

		::System::Void AddRewardGroup(::Class_0_16E4307DCC419505_717* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_717*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_ADDREWARDGROUP_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_718* get_GotoConfig()
		{
			return ((::Class_0_16E4307DCC419505_718*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDDATA_GET_GOTOCONFIG_OFFSET))(this);
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
