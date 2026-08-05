#pragma once
#include "unitysdk/unitysdk.h"

namespace ClipperLib
{
	inline static constexpr unsigned int ClipType_TypeDefinitionIndex = 33408;

	enum class ClipType : ::System::Int32
	{
		ctIntersection = 0,
		ctUnion = 1,
		ctDifference = 2,
		ctXor = 3,
	};
}
