#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbilityPropertyRatio_TypeDefinitionIndex = 16797;

	enum class AdventureAbilityPropertyRatio : ::System::Int32
	{
		Unknow = 0,
		HPRatio = 1,
		SPRatio = 2,
		SpecialSPRatio = 3,
	};
}
