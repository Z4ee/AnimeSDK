#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyPlane_TypeDefinitionIndex = 38873;

	enum class CurvyPlane : ::System::Int32
	{
		XY = 0,
		YZ = 2,
		XZ = 1,
	};
}
