#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyOrientationSwirl_TypeDefinitionIndex = 38889;

	enum class CurvyOrientationSwirl : ::System::Int32
	{
		None = 0,
		AnchorGroupAbs = 3,
		Segment = 1,
		AnchorGroup = 2,
	};
}
