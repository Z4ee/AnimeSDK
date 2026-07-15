#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBuffCategory_TypeDefinitionIndex = 10243;

	enum class RogueBuffCategory : ::System::Int32
	{
		None = 0,
		Common = 1,
		Rare = 2,
		Legendary = 3,
	};
}
