#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhase; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8B110)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS15_0___OPENRESULTPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x18A8B120)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeModule___c__DisplayClass15_0_TypeDefinitionIndex = 59162;

	class ActivityStrongChallengeModule___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleGamePhase* gamePhase; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void __OpenResultPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___C__DISPLAYCLASS15_0___OPENRESULTPAGE_B__0_OFFSET))(this);
		}
	};
}
