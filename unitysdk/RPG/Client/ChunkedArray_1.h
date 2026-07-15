#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChunkedArray_1_Chunk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int ChunkedArray_1_TypeDefinitionIndex = 33768;

	template <typename T>
	class ChunkedArray_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChunkedArray_1_Chunk<T>>* Chunks; // 0x0
		::System::Int32 NumElements; // 0x0
		::System::Int32 ChunkSize; // 0x0
	};
}
