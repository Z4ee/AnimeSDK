#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"

namespace System::Buffers
{
	inline static constexpr unsigned int ArrayMemoryPool_1_ArrayMemoryPoolBuffer_TypeDefinitionIndex = 4973;

	template <typename T>
	class ArrayMemoryPool_1_ArrayMemoryPoolBuffer : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _array; // 0x0
	};
}
