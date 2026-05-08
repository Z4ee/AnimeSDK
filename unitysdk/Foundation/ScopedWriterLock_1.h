#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int ScopedWriterLock_1_TypeDefinitionIndex = 9129;

	template <typename T>
	struct ScopedWriterLock_1
	{
		T _lock; // 0x0
	};
}
