#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_23.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveQuestTreeRewardData.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B6F0B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_EQUIPDATA_OFFSET UNITYSDK_OFFSET(0x9B6F940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ISEQUIP_OFFSET UNITYSDK_OFFSET(0x9B6FA00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x9B6FA20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_QUESTDATA_OFFSET UNITYSDK_OFFSET(0x9B6F9B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_REWARDDATA_OFFSET UNITYSDK_OFFSET(0x9B6F960)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x9B6F9E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_SPECIALEQUIP_OFFSET UNITYSDK_OFFSET(0x9B6F990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9B6F9D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_REFRESHQUESTDATA_OFFSET UNITYSDK_OFFSET(0x9B6F730)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_EQUIPDATA_OFFSET UNITYSDK_OFFSET(0x9B6F950)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ISEQUIP_OFFSET UNITYSDK_OFFSET(0x9B6FA10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x9B6FA30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_QUESTDATA_OFFSET UNITYSDK_OFFSET(0x9B6F9C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_REWARDDATA_OFFSET UNITYSDK_OFFSET(0x9B6F980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x9B6F9F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_SPECIALEQUIP_OFFSET UNITYSDK_OFFSET(0x9B6F9A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B6F2C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA__GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9B6F7E0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestTreeItemData_TypeDefinitionIndex = 69434;

	class IdleLiveQuestTreeItemData : public ::System::Object
	{
	public:
		::RPG::Client::QuestData* _QuestData_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::SpecialEquip* _SpecialEquip_k__BackingField; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* _EquipData_k__BackingField; // 0x20
		::System::String* _RoundIconPath_k__BackingField; // 0x28
		::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData _RewardData_k__BackingField; // 0x30
		::System::Boolean _IsSpecial_k__BackingField; // 0x3C
		::System::Boolean _IsEquip_k__BackingField; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData* Create(::System::UInt32 questID)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_CREATE_OFFSET))(questID);
		}

		::System::Void RefreshQuestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_REFRESHQUESTDATA_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_23 _GetStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_23(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA__GETSTATUS_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* get_EquipData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_EQUIPDATA_OFFSET))(this);
		}

		::System::Void set_EquipData(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_EQUIPDATA_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData get_RewardData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_REWARDDATA_OFFSET))(this);
		}

		::System::Void set_RewardData(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeRewardData))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_REWARDDATA_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::SpecialEquip* get_SpecialEquip()
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_SPECIALEQUIP_OFFSET))(this);
		}

		::System::Void set_SpecialEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_SPECIALEQUIP_OFFSET))(this, value);
		}

		::RPG::Client::QuestData* get_QuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_QUESTDATA_OFFSET))(this);
		}

		::System::Void set_QuestData(::RPG::Client::QuestData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_QUESTDATA_OFFSET))(this, value);
		}

		::Enum_3_4608E37A1B3D374A_23 get_Status()
		{
			return ((::Enum_3_4608E37A1B3D374A_23(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_STATUS_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::Void set_RoundIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ROUNDICONPATH_OFFSET))(this, value);
		}

		::System::Boolean get_IsEquip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ISEQUIP_OFFSET))(this);
		}

		::System::Void set_IsEquip(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ISEQUIP_OFFSET))(this, value);
		}

		::System::Boolean get_IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ISSPECIAL_OFFSET))(this);
		}

		::System::Void set_IsSpecial(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ISSPECIAL_OFFSET))(this, value);
		}
	};
}
