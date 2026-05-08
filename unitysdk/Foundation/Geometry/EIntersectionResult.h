#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int EIntersectionResult_TypeDefinitionIndex = 9086;

	enum class EIntersectionResult : ::System::Int32
	{
		OneIntersection = 2,
		Invalid = 0,
		InfiniteIntersection = 4,
		TwoIntersection = 3,
		NoIntersection = 1,
	};
}
