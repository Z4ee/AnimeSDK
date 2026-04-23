#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/BaseSpEquipInventoryDisplayData.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_CONFIRMEQUIP_OFFSET UNITYSDK_OFFSET(0x9BDF2C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_TAKEOFFEQUIP_OFFSET UNITYSDK_OFFSET(0x9BDF490)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_WEAREQUIP_OFFSET UNITYSDK_OFFSET(0x9BDF620)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_WEARSTRONGESTEQUIPS_OFFSET UNITYSDK_OFFSET(0x9BDF820)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9BDF2B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA__UPDATEQUICKSTRATEGYSELECTEDEQUIPS_OFFSET UNITYSDK_OFFSET(0x9BDFA20)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpEquipInventoryDisplayData_TypeDefinitionIndex = 69496;

	class SpEquipInventoryDisplayData : public ::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData
	{
	public:
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* teamInfo, ::System::UInt32 initSelectedEquipId, ::System::Boolean isQuickSelect, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* spEquipSlotInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*, ::System::UInt32, ::System::Boolean, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA__CTOR_OFFSET))(this, teamInfo, initSelectedEquipId, isQuickSelect, spEquipSlotInfo);
		}

		::System::Void ConfirmEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_CONFIRMEQUIP_OFFSET))(this);
		}

		::System::Void WearStrongestEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_WEARSTRONGESTEQUIPS_OFFSET))(this);
		}

		::System::Void _UpdateQuickStrategySelectedEquips(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* strongestEquipList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA__UPDATEQUICKSTRATEGYSELECTEDEQUIPS_OFFSET))(this, strongestEquipList);
		}

		::System::Void WearEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_WEAREQUIP_OFFSET))(this, equip);
		}

		::System::Void TakeoffEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA_TAKEOFFEQUIP_OFFSET))(this, equip);
		}
	};
}
