#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::Adapter
{
	inline static constexpr unsigned int ManagedChunkList_1_TypeDefinitionIndex = 8403;

	template <typename T>
	class ManagedChunkList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Il2CppArray<T>*>* _chunks; // 0x0
		::System::Int32 _chunkSizeBit; // 0x0
		::System::Int32 ChunkSize; // 0x0
		::System::Int32 ChunkMask; // 0x0
		::System::Int32 _count; // 0x0
	};
}
