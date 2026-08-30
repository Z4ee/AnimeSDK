#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveTeamSlotLevelUpRewardType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class IdleLiveAvatarUpgradeRewardRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_CREATE_OFFSET UNITYSDK_OFFSET(0xC5ED4F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_GET_CURRENCYICONPATHS_OFFSET UNITYSDK_OFFSET(0xC5EE4E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC5EE480)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0xC5EE4C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC5EE4A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_SET_CURRENCYICONPATHS_OFFSET UNITYSDK_OFFSET(0xC5EE4F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC5EE490)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0xC5EE4D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xC5EE4B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC5EE470)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamSlotLevelUpReward_TypeDefinitionIndex = 74810;

	class IdleLiveTeamSlotLevelUpReward : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _CurrencyIconPaths_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _Rewards_k__BackingField; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x20
		::RPG::GameCore::IdleLiveTeamSlotLevelUpRewardType _Type_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward* Create(::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward*(*)(::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::IdleLiveTeamSlotLevelUpRewardType get_Type()
		{
			return ((::RPG::GameCore::IdleLiveTeamSlotLevelUpRewardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::IdleLiveTeamSlotLevelUpRewardType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveTeamSlotLevelUpRewardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_Rewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_GET_REWARDS_OFFSET))(this);
		}

		::System::Void set_Rewards(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_SET_REWARDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_CurrencyIconPaths()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_GET_CURRENCYICONPATHS_OFFSET))(this);
		}

		::System::Void set_CurrencyIconPaths(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTLEVELUPREWARD_SET_CURRENCYICONPATHS_OFFSET))(this, a1);
		}
	};
}
