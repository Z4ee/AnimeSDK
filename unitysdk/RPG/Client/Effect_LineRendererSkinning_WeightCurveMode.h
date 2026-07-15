#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_LineRendererSkinning_WeightCurveMode_TypeDefinitionIndex = 67351;

	enum class Effect_LineRendererSkinning_WeightCurveMode : ::System::Int32
	{
		QuinticPolynomial = 0,
		QuadraticRational = 1,
		CubicRational = 2,
	};
}
