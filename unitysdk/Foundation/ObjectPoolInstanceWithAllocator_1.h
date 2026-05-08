#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectPoolInstance_1.h"

namespace Foundation { template <typename T> class IObjectPoolAllocator_1; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectPoolInstanceWithAllocator_1_TypeDefinitionIndex = 8017;

	template <typename T>
	class ObjectPoolInstanceWithAllocator_1 : public ::Foundation::ObjectPoolInstance_1<T>
	{
	public:
		::Foundation::IObjectPoolAllocator_1<T>* _allocator; // 0x0
	};
}
