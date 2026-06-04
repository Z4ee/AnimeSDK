#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBuffRarity_TypeDefinitionIndex = 10221;

	enum class RogueBuffRarity : ::System::Int32
	{
		Common = 1,
		Rare = 2,
		Legendary = 3,
	};
}
