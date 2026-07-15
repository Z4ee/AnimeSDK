#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateAffixRarityType_TypeDefinitionIndex = 10038;

	enum class FateAffixRarityType : ::System::Int32
	{
		None = 0,
		Common = 1,
		Rare = 2,
		Epic = 3,
		Legendary = 4,
	};
}
