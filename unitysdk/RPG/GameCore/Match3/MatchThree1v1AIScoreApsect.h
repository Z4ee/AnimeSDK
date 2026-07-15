#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThree1v1AIScoreApsect_TypeDefinitionIndex = 24074;

	enum class MatchThree1v1AIScoreApsect : ::System::Int32
	{
		Power = 0,
		Move = 1,
		Energy = 2,
		Bomb = 3,
		SuperSwap = 4,
		Count = 5,
	};
}
