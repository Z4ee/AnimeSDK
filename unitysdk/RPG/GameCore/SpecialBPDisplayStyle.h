#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialBPDisplayStyle_TypeDefinitionIndex = 23883;

	enum class SpecialBPDisplayStyle : ::System::Int32
	{
		Normal = 0,
		Red = 1,
		Green = 2,
		Blue = 3,
		SamBurning = 4,
		Dirty = 5,
		Negative = 6,
	};
}
