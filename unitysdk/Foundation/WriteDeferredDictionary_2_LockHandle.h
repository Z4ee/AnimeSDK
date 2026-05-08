#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T1, typename T2> class WriteDeferredDictionary_2; }

namespace Foundation
{
	inline static constexpr unsigned int WriteDeferredDictionary_2_LockHandle_TypeDefinitionIndex = 7908;

	template <typename TKey, typename TValue>
	struct WriteDeferredDictionary_2_LockHandle
	{
		::Foundation::WriteDeferredDictionary_2<TKey, TValue>* owner; // 0x0
	};
}
