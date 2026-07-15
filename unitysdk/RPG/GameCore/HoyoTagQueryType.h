#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoyoTagQueryType_TypeDefinitionIndex = 23669;

	enum class HoyoTagQueryType : ::System::Int32
	{
		MatchAny = 1,
		MatchAnyExact = 2,
		MatchAll = 3,
		MatchAllExact = 4,
	};
}
