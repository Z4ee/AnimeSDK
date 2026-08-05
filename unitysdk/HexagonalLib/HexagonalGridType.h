#pragma once
#include "unitysdk/unitysdk.h"

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalGridType_TypeDefinitionIndex = 29236;

	enum class HexagonalGridType : ::System::Byte
	{
		FlatOdd = 0x2,
		PointyEven = 0x1,
		PointyOdd = 0x0,
		FlatEven = 0x3,
	};
}
