#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerSatifyCommentTriggerType_TypeDefinitionIndex = 12697;

	enum class DrinkMakerSatifyCommentTriggerType : ::System::Int32
	{
		None = 0,
		ByTagCombination = 1,
		ByIngredientTypeCnt = 2,
		ByHueInterval = 3,
		ByLowSaturationOrValue = 4,
	};
}
