#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipFly; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipFlyService; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B531A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE___C__DISPLAYCLASS8_0__SHOWEQUIPFLY_B__0_OFFSET UNITYSDK_OFFSET(0x9B53290)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveEquipFlyService___c__DisplayClass8_0_TypeDefinitionIndex = 69347;

	class IdleLiveEquipFlyService___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveEquipFlyService* __4__this; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveEquipFly* equipFly; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEquipFly_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE___C__DISPLAYCLASS8_0__SHOWEQUIPFLY_B__0_OFFSET))(this);
		}
	};
}
