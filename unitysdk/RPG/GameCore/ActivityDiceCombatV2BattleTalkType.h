#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatV2BattleTalkType_TypeDefinitionIndex = 10921;

	enum class ActivityDiceCombatV2BattleTalkType : ::System::Int32
	{
		None = 0,
		OurTeam = 1,
		Opponent = 2,
	};
}
