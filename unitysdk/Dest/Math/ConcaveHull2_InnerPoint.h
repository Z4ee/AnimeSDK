#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Dest::Math
{
	inline static constexpr unsigned int ConcaveHull2_InnerPoint_TypeDefinitionIndex = 33102;

	struct alignas(4) ConcaveHull2_InnerPoint
	{
		::System::Single AverageDistance; // 0x10
		::System::Single Distance0; // 0x14
		::System::Single Distance1; // 0x18
		::System::Int32 Index; // 0x1C
	};
}
