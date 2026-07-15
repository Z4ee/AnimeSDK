#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SWRT/AABB.h"
#include "unitysdk/System/ValueType.h"

namespace SWRT
{
	inline static constexpr unsigned int BVH2_AABBWrap_TypeDefinitionIndex = 35948;

	struct alignas(4) BVH2_AABBWrap
	{
		::SWRT::AABB AABB; // 0x10
		::System::Int32 Index; // 0x28
	};
}
