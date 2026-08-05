#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T> class ObjectPool_1; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectPool_1_PooledObject_TypeDefinitionIndex = 8455;

	template <typename T>
	struct ObjectPool_1_PooledObject
	{
		T m_ToReturn; // 0x0
		::Foundation::ObjectPool_1<T>* m_Pool; // 0x0
	};
}
