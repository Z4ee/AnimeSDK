#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/MemoryPool_1.h"

namespace System::Buffers { template <typename T> class IMemoryOwner_1; }

namespace System::Buffers
{
	inline static constexpr unsigned int ArrayMemoryPool_1_TypeDefinitionIndex = 4984;

	template <typename T>
	class ArrayMemoryPool_1 : public ::System::Buffers::MemoryPool_1<T>
	{
	public:
	};
}
