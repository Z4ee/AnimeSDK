#pragma once
#include "unitysdk/unitysdk.h"

namespace PathCreation
{
	inline static constexpr unsigned int PathSpace_TypeDefinitionIndex = 38111;

	enum class PathSpace : ::System::Int32
	{
		xyz = 0,
		xy = 1,
		xz = 2,
	};
}
