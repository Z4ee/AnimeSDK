#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_28.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveQuestTreeRewardData.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC4EC3B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_EQUIPDATA_OFFSET UNITYSDK_OFFSET(0xC4ECC80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ISEQUIP_OFFSET UNITYSDK_OFFSET(0xC4ECD80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xC4ECDA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_QUESTDATA_OFFSET UNITYSDK_OFFSET(0xC4ECCF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_REWARDDATA_OFFSET UNITYSDK_OFFSET(0xC4ECCA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xC4ECD60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_SPECIALEQUIP_OFFSET UNITYSDK_OFFSET(0xC4ECCD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC4ECD10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_REFRESHQUESTDATA_OFFSET UNITYSDK_OFFSET(0xC4ECA70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_EQUIPDATA_OFFSET UNITYSDK_OFFSET(0xC4ECC90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ISEQUIP_OFFSET UNITYSDK_OFFSET(0xC4ECD90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xC4ECDB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_QUESTDATA_OFFSET UNITYSDK_OFFSET(0xC4ECD00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_REWARDDATA_OFFSET UNITYSDK_OFFSET(0xC4ECCC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xC4ECD70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_SPECIALEQUIP_OFFSET UNITYSDK_OFFSET(0xC4ECCE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC4EC600)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA__GETSTATUS_OFFSET UNITYSDK_OFFSET(0xC4ECB20)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestTreeItemData_TypeDefinitionIndex = 75376;

	class IdleLiveQuestTreeItemData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::SpecialEquip* _SpecialEquip_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* _EquipData_k__BackingField; // 0x18
		::System::String* _RoundIconPath_k__BackingField; // 0x20
		::RPG::Client::QuestData* _QuestData_k__BackingField; // 0x28
		::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData _RewardData_k__BackingField; // 0x30
		::System::Boolean _IsSpecial_k__BackingField; // 0x3C
		::System::Boolean _IsEquip_k__BackingField; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_CREATE_OFFSET))(a1);
		}

		::System::Void RefreshQuestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_REFRESHQUESTDATA_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_28 _GetStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA__GETSTATUS_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* get_EquipData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_EQUIPDATA_OFFSET))(this);
		}

		::System::Void set_EquipData(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_EQUIPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData get_RewardData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_REWARDDATA_OFFSET))(this);
		}

		::System::Void set_RewardData(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_REWARDDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::SpecialEquip* get_SpecialEquip()
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_SPECIALEQUIP_OFFSET))(this);
		}

		::System::Void set_SpecialEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_SPECIALEQUIP_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* get_QuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_QUESTDATA_OFFSET))(this);
		}

		::System::Void set_QuestData(::RPG::Client::QuestData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_QUESTDATA_OFFSET))(this, a1);
		}

		::Enum_3_4608E37A1B3D374A_28 get_Status()
		{
			return ((::Enum_3_4608E37A1B3D374A_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_STATUS_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::Void set_RoundIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ROUNDICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEquip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ISEQUIP_OFFSET))(this);
		}

		::System::Void set_IsEquip(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ISEQUIP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ISSPECIAL_OFFSET))(this);
		}

		::System::Void set_IsSpecial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ISSPECIAL_OFFSET))(this, a1);
		}
	};
}
