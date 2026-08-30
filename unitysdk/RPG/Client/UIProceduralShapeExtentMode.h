#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIProceduralShapeExtentMode_TypeDefinitionIndex = 72629;

	enum class UIProceduralShapeExtentMode : ::System::Int32
	{
		Uniform = 0,
		RectBound = 1,
		Manual = 2,
	};
}
