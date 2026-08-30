#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeOpponentType_TypeDefinitionIndex = 66021;

	enum class MatchThreeOpponentType : ::System::Int32
	{
		Invalid = 0,
		Self = 1,
		Player = 2,
		AI = 3,
	};
}
