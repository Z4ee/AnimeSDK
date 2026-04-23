#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/BaseSpEquipInventoryDisplayData.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_CONFIRMEQUIP_OFFSET UNITYSDK_OFFSET(0x9B27160)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_TAKEOFFEQUIP_OFFSET UNITYSDK_OFFSET(0x9B271D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_WEAREQUIP_OFFSET UNITYSDK_OFFSET(0x9B27280)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_WEARSTRONGESTEQUIPS_OFFSET UNITYSDK_OFFSET(0x9B27390)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B27150)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA__SAVEDUNGEONSPEQUIPSTOPREFS_OFFSET UNITYSDK_OFFSET(0x9B27420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA__UPDATESPEQUIPSLOTS_OFFSET UNITYSDK_OFFSET(0x9B27710)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int DungeonSpEquipInventoryDisplayData_TypeDefinitionIndex = 69477;

	class DungeonSpEquipInventoryDisplayData : public ::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData
	{
	public:
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* teamInfo, ::System::UInt32 initSelectedEquipId, ::System::Boolean isQuickSelect, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* spEquipSlotInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*, ::System::UInt32, ::System::Boolean, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA__CTOR_OFFSET))(this, teamInfo, initSelectedEquipId, isQuickSelect, spEquipSlotInfo);
		}

		::System::Void ConfirmEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_CONFIRMEQUIP_OFFSET))(this);
		}

		::System::Void WearStrongestEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_WEARSTRONGESTEQUIPS_OFFSET))(this);
		}

		::System::Void WearEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_WEAREQUIP_OFFSET))(this, equip);
		}

		::System::Void TakeoffEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* equip)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_TAKEOFFEQUIP_OFFSET))(this, equip);
		}

		::System::Void _SaveDungeonSpEquipsToPrefs(::System::UInt32 dungeonId, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* equipList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA__SAVEDUNGEONSPEQUIPSTOPREFS_OFFSET))(this, dungeonId, equipList);
		}

		::System::Void _UpdateSpEquipSlots(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* equipList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA__UPDATESPEQUIPSLOTS_OFFSET))(this, equipList);
		}
	};
}
