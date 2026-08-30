#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int CurveCreateMode_TypeDefinitionIndex = 49308;

	enum class CurveCreateMode : ::System::Int32
	{
		Arc = 0,
		Spiral = 1,
	};
}
