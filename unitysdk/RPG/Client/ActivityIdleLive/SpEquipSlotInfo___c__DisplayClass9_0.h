#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BE1080)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS9_0__GETSLOTIDBYTEAMSLOT_B__0_OFFSET UNITYSDK_OFFSET(0x9BE3180)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpEquipSlotInfo___c__DisplayClass9_0_TypeDefinitionIndex = 69302;

	class SpEquipSlotInfo___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::UInt32 teamSlotId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSlotIdByTeamSlot_b__0(::RPG::Client::ActivityIdleLive::SpEquipSlotData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS9_0__GETSLOTIDBYTEAMSLOT_B__0_OFFSET))(this, x);
		}
	};
}
