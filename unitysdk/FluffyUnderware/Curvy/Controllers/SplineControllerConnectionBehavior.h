#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int SplineControllerConnectionBehavior_TypeDefinitionIndex = 38855;

	enum class SplineControllerConnectionBehavior : ::System::Int32
	{
		FollowUpOtherwiseRandom = 3,
		CurrentSpline = 0,
		Custom = 4,
		FollowUpSpline = 1,
		RandomSpline = 2,
	};
}
