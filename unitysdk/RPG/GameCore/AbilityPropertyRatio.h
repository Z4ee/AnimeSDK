#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPropertyRatio_TypeDefinitionIndex = 17478;

	enum class AbilityPropertyRatio : ::System::Int32
	{
		Unknow = 0,
		HPRatio = 1,
		SPRatio = 2,
		StanceRatio = 3,
		SpecialSPRatio = 4,
	};
}
