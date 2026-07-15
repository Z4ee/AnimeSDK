#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAddItemSourceType_TypeDefinitionIndex = 10203;

	enum class GridFightAddItemSourceType : ::System::Int32
	{
		None = 0,
		Bonus = 1,
		ByThief = 2,
		ByTrait = 3,
		ByNpc = 4,
		Craft = 5,
		TraitEffectElation = 6,
		Forge = 8,
		Supply = 9,
	};
}
