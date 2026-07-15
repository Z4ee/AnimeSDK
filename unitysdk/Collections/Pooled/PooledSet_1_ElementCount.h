#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledSet_1_ElementCount_TypeDefinitionIndex = 5105;

	template <typename T>
	struct PooledSet_1_ElementCount
	{
		::System::Int32 uniqueCount; // 0x0
		::System::Int32 unfoundCount; // 0x0
	};
}
