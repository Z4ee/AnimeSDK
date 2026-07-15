#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformToMaterialBehavior_TransformPropertyScale_ScaleWMode_TypeDefinitionIndex = 67421;

	enum class Effect_TransformToMaterialBehavior_TransformPropertyScale_ScaleWMode : ::System::Int32
	{
		Custom = 0,
		UniformAverage = 1,
		MaxComponent = 2,
		MinComponent = 3,
	};
}
