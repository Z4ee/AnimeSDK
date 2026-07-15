#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A18D1A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS3_0___UPDATEQUICKSTRATEGYSELECTEDEQUIPS_B__0_OFFSET UNITYSDK_OFFSET(0x1A18DBA0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpEquipInventoryDisplayData___c__DisplayClass3_0_TypeDefinitionIndex = 71833;

	class SpEquipInventoryDisplayData___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> tuple; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateQuickStrategySelectedEquips_b__0(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPEQUIPINVENTORYDISPLAYDATA___C__DISPLAYCLASS3_0___UPDATEQUICKSTRATEGYSELECTEDEQUIPS_B__0_OFFSET))(this, a1);
		}
	};
}
