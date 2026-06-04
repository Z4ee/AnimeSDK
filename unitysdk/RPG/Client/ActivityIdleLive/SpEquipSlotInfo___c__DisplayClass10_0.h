#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB17D420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS10_0__TRYGETSLOTBYID_B__0_OFFSET UNITYSDK_OFFSET(0xB17F2A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpEquipSlotInfo___c__DisplayClass10_0_TypeDefinitionIndex = 70109;

	class SpEquipSlotInfo___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 slotId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetSlotById_b__0(::RPG::Client::ActivityIdleLive::SpEquipSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPSLOTINFO___C__DISPLAYCLASS10_0__TRYGETSLOTBYID_B__0_OFFSET))(this, a1);
		}
	};
}
