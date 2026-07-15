#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/ValueType.h"

namespace RVO
{
	inline static constexpr unsigned int Line_TypeDefinitionIndex = 42710;

	struct alignas(4) Line
	{
		::RVO::Vector2 direction; // 0x10
		::RVO::Vector2 point; // 0x18
	};
}
