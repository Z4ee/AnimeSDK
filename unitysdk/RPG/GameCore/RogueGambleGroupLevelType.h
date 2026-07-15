#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueGambleGroupLevelType_TypeDefinitionIndex = 10274;

	enum class RogueGambleGroupLevelType : ::System::Int32
	{
		UnKnown = 0,
		Negative = 1,
		Common = 2,
		Normal = 3,
		Grand = 4,
	};
}
