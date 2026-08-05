#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Dest::Math
{
	inline static constexpr unsigned int BrentsRoot_TypeDefinitionIndex = 35407;

	struct alignas(4) BrentsRoot
	{
		::System::Single X; // 0x10
		::System::Int32 Iterations; // 0x14
		::System::Boolean ExceededMaxIterations; // 0x18
	};
}
