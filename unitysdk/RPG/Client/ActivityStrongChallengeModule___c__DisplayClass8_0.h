#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhase; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87DDE0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS8_0__RETURNTOMAZE_B__0_OFFSET UNITYSDK_OFFSET(0x1B880A90)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS8_0__RETURNTOMAZE_B__1_OFFSET UNITYSDK_OFFSET(0x1B880BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeModule___c__DisplayClass8_0_TypeDefinitionIndex = 61998;

	class ActivityStrongChallengeModule___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleGamePhase* gamePhase; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReturnToMaze_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS8_0__RETURNTOMAZE_B__0_OFFSET))(this);
		}

		::System::Void _ReturnToMaze_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS8_0__RETURNTOMAZE_B__1_OFFSET))(this);
		}
	};
}
