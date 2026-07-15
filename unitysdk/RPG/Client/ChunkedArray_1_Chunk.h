#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChunkedArray_1_Chunk_TypeDefinitionIndex = 33769;

	template <typename T>
	struct ChunkedArray_1_Chunk
	{
		::Il2CppArray<T>* Elements; // 0x0
	};
}
