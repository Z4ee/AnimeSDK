#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int Dual_2_TypeDefinitionIndex = 8781;

	template <typename T, typename TPolicy>
	struct Dual_2
	{
		T real; // 0x0
		T dual; // 0x0
	};
}
