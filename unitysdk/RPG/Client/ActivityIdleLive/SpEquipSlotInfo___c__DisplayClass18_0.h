#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB17E150)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS18_0__ISEQUIPWORN_B__0_OFFSET UNITYSDK_OFFSET(0xB17F340)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpEquipSlotInfo___c__DisplayClass18_0_TypeDefinitionIndex = 70112;

	class SpEquipSlotInfo___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::SpecialEquip* equip; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsEquipWorn_b__0(::RPG::Client::ActivityIdleLive::SpEquipSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS18_0__ISEQUIPWORN_B__0_OFFSET))(this, a1);
		}
	};
}
