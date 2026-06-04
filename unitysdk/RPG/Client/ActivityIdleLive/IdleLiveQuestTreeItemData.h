#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_22.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveQuestTreeRewardData.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB157360)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_EQUIPDATA_OFFSET UNITYSDK_OFFSET(0xB157BF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ISEQUIP_OFFSET UNITYSDK_OFFSET(0xB157CB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xB157CD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_QUESTDATA_OFFSET UNITYSDK_OFFSET(0xB157C60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_REWARDDATA_OFFSET UNITYSDK_OFFSET(0xB157C10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xB157C90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_SPECIALEQUIP_OFFSET UNITYSDK_OFFSET(0xB157C40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xB157C80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_REFRESHQUESTDATA_OFFSET UNITYSDK_OFFSET(0xB1579E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_EQUIPDATA_OFFSET UNITYSDK_OFFSET(0xB157C00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ISEQUIP_OFFSET UNITYSDK_OFFSET(0xB157CC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xB157CE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_QUESTDATA_OFFSET UNITYSDK_OFFSET(0xB157C70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_REWARDDATA_OFFSET UNITYSDK_OFFSET(0xB157C30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xB157CA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_SET_SPECIALEQUIP_OFFSET UNITYSDK_OFFSET(0xB157C50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB157570)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA__GETSTATUS_OFFSET UNITYSDK_OFFSET(0xB157A90)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestTreeItemData_TypeDefinitionIndex = 70246;

	class IdleLiveQuestTreeItemData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* _EquipData_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::SpecialEquip* _SpecialEquip_k__BackingField; // 0x18
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

		::Enum_3_4608E37A1B3D374A_22 _GetStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_22(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA__GETSTATUS_OFFSET))(this);
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

		::Enum_3_4608E37A1B3D374A_22 get_Status()
		{
			return ((::Enum_3_4608E37A1B3D374A_22(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEITEMDATA_GET_STATUS_OFFSET))(this);
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
