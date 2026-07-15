#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueFormulaCategory_TypeDefinitionIndex = 10246;

	enum class RogueFormulaCategory : ::System::Int32
	{
		Common = 1,
		Rare = 2,
		Epic = 3,
		Legendary = 4,
		PathEcho = 5,
	};
}
