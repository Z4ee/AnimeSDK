#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BE1F50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS19_0__GETEQUIPBELONGEDONEBASEDINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x9BE30E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS19_0__GETEQUIPBELONGEDONEBASEDINDEX_B__1_OFFSET UNITYSDK_OFFSET(0x9BE3130)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpEquipSlotInfo___c__DisplayClass19_0_TypeDefinitionIndex = 69301;

	class SpEquipSlotInfo___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::SpecialEquip* equip; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipBelongedOneBasedIndex_b__0(::RPG::Client::ActivityIdleLive::SpEquipSlotData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS19_0__GETEQUIPBELONGEDONEBASEDINDEX_B__0_OFFSET))(this, x);
		}

		::System::Boolean _GetEquipBelongedOneBasedIndex_b__1(::RPG::Client::ActivityIdleLive::SpEquipSlotData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS19_0__GETEQUIPBELONGEDONEBASEDINDEX_B__1_OFFSET))(this, x);
		}
	};
}
