#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int SplineControllerConnectionBehavior_TypeDefinitionIndex = 39542;

	enum class SplineControllerConnectionBehavior : ::System::Int32
	{
		FollowUpOtherwiseRandom = 3,
		FollowUpSpline = 1,
		RandomSpline = 2,
		Custom = 4,
		CurrentSpline = 0,
	};
}
