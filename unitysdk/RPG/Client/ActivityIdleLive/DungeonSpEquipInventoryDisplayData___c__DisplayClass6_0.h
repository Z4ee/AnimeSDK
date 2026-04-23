#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B279F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS6_0___UPDATESPEQUIPSLOTS_B__0_OFFSET UNITYSDK_OFFSET(0x9B27A00)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int DungeonSpEquipInventoryDisplayData___c__DisplayClass6_0_TypeDefinitionIndex = 69478;

	class DungeonSpEquipInventoryDisplayData___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> equipInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateSpEquipSlots_b__0(::RPG::Client::ActivityIdleLive::SpecialEquip* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DUNGEONSPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS6_0___UPDATESPEQUIPSLOTS_B__0_OFFSET))(this, x);
		}
	};
}
