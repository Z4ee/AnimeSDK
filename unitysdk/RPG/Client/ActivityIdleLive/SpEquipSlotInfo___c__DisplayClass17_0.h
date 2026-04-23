#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BE1D60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS17_0__TRYGETEQUIPBELONGEDSLOT_B__0_OFFSET UNITYSDK_OFFSET(0x9BE3040)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpEquipSlotInfo___c__DisplayClass17_0_TypeDefinitionIndex = 69299;

	class SpEquipSlotInfo___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::SpecialEquip* equip; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetEquipBelongedSlot_b__0(::RPG::Client::ActivityIdleLive::SpEquipSlotData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS17_0__TRYGETEQUIPBELONGEDSLOT_B__0_OFFSET))(this, x);
		}
	};
}
