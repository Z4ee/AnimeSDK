#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ModelFlipOption_TypeDefinitionIndex = 66924;

	enum class ModelFlipOption : ::System::Int32
	{
		FlipScale = 0,
		FlipRotation = 1,
		NotFlip = 2,
	};
}
