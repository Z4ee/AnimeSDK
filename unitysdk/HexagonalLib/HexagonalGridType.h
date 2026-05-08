#pragma once
#include "unitysdk/unitysdk.h"

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalGridType_TypeDefinitionIndex = 26368;

	enum class HexagonalGridType : ::System::Byte
	{
		FlatEven = 0x3,
		PointyOdd = 0x0,
		FlatOdd = 0x2,
		PointyEven = 0x1,
	};
}
