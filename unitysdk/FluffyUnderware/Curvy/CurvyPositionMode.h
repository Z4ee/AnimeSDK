#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyPositionMode_TypeDefinitionIndex = 39582;

	enum class CurvyPositionMode : ::System::Int32
	{
		WorldUnits = 1,
		Relative = 0,
	};
}
