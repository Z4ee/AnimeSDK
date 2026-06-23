#pragma once
#include "unitysdk/unitysdk.h"

namespace ClipperLib
{
	inline static constexpr unsigned int PolyFillType_TypeDefinitionIndex = 32775;

	enum class PolyFillType : ::System::Int32
	{
		pftEvenOdd = 0,
		pftNonZero = 1,
		pftPositive = 2,
		pftNegative = 3,
	};
}
