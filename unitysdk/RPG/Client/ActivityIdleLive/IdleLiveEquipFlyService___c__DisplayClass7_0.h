#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65BD00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE___C__DISPLAYCLASS7_0__ONALLEQUIPSELECTFINISHED_B__0_OFFSET UNITYSDK_OFFSET(0x1A65C2B0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveEquipFlyService___c__DisplayClass7_0_TypeDefinitionIndex = 71681;

	class IdleLiveEquipFlyService___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::ValueTuple_2<::System::Boolean, ::System::Boolean> spEquipHintData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAllEquipSelectFinished_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE___C__DISPLAYCLASS7_0__ONALLEQUIPSELECTFINISHED_B__0_OFFSET))(this);
		}
	};
}
