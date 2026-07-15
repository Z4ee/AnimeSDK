#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleResultConditionType_TypeDefinitionIndex = 14827;

	enum class BattleResultConditionType : ::System::Int32
	{
		CDT_MonsterDie = 0,
		CDT_CharactorDie = 1,
		CDT_TrialCharactorDie = 2,
		CDT_TurnCountMatch = 3,
		CDT_MonsterHurt = 4,
		CDT_WaitCustomString = 5,
	};
}
