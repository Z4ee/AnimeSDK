#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Adapter/ChunkListView2D_1.h"
#include "unitysdk/Foundation/Adapter/ReadOnlyChunkListView2D_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::Adapter
{
	inline static constexpr unsigned int ChunkList2D_1_TypeDefinitionIndex = 8727;

	template <typename T>
	class ChunkList2D_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>* _chunks; // 0x0
		::Unity::Collections::NativeArray_1<::System::IntPtr> _chunkPointers; // 0x0
		::System::Int32 _chunkSizeBit; // 0x0
		::Unity::Collections::Allocator _allocator; // 0x0
		::System::Int32 ElementSize; // 0x0
		::System::Int32 ChunkSize; // 0x0
		::System::Int32 ChunkMask; // 0x0
		::System::Int32 _count; // 0x0
	};
}
