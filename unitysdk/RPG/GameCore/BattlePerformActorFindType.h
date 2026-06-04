#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformActorFindType_TypeDefinitionIndex = 23388;

	enum class BattlePerformActorFindType : ::System::Int32
	{
		ByCharacterID = 0,
		ByOther = 99,
	};
}
