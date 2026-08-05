#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int EIntersectionResult_TypeDefinitionIndex = 8612;

	enum class EIntersectionResult : ::System::Int32
	{
		Invalid = 0,
		InfiniteIntersection = 4,
		NoIntersection = 1,
		TwoIntersection = 3,
		OneIntersection = 2,
	};
}
