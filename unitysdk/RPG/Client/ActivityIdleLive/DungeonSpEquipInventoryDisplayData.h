#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/BaseSpEquipInventoryDisplayData.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_CONFIRMEQUIP_OFFSET UNITYSDK_OFFSET(0x19D21A80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_TAKEOFFEQUIP_OFFSET UNITYSDK_OFFSET(0x19D21AF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_WEAREQUIP_OFFSET UNITYSDK_OFFSET(0x19D21BD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_WEARSTRONGESTEQUIPS_OFFSET UNITYSDK_OFFSET(0x19D21D20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D21A70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA__SAVEDUNGEONSPEQUIPSTOPREFS_OFFSET UNITYSDK_OFFSET(0x19D21DE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA__UPDATESPEQUIPSLOTS_OFFSET UNITYSDK_OFFSET(0x19D22160)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int DungeonSpEquipInventoryDisplayData_TypeDefinitionIndex = 71812;

	class DungeonSpEquipInventoryDisplayData : public ::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData
	{
	public:
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1, ::System::UInt32 a2, ::System::Boolean a3, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*, ::System::UInt32, ::System::Boolean, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ConfirmEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_CONFIRMEQUIP_OFFSET))(this);
		}

		::System::Void WearStrongestEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_WEARSTRONGESTEQUIPS_OFFSET))(this);
		}

		::System::Void WearEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_WEAREQUIP_OFFSET))(this, a1);
		}

		::System::Void TakeoffEquip(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA_TAKEOFFEQUIP_OFFSET))(this, a1);
		}

		::System::Void _SaveDungeonSpEquipsToPrefs(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA__SAVEDUNGEONSPEQUIPSTOPREFS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateSpEquipSlots(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA__UPDATESPEQUIPSLOTS_OFFSET))(this, a1);
		}
	};
}
