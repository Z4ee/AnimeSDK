#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_29ADE9724E15BDC9;

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B73480)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS___C__DISPLAYCLASS16_0__INITANDENTERBATTLE_B__0_OFFSET UNITYSDK_OFFSET(0x9B737A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveShortcuts___c__DisplayClass16_0_TypeDefinitionIndex = 69376;

	class IdleLiveShortcuts___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::Class_1_29ADE9724E15BDC9* gameFlowPrepareService; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitAndEnterBattle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS___C__DISPLAYCLASS16_0__INITANDENTERBATTLE_B__0_OFFSET))(this);
		}
	};
}
