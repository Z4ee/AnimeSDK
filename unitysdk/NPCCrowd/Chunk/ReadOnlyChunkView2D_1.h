#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

namespace NPCCrowd::Chunk
{
	inline static constexpr unsigned int ReadOnlyChunkView2D_1_TypeDefinitionIndex = 8659;

	template <typename T>
	struct ReadOnlyChunkView2D_1
	{
		::Unity::Collections::NativeSlice_1<::System::Int32> _count; // 0x0
		::Unity::Collections::NativeSlice_1<::System::Int32> _dimensions; // 0x0
		::Unity::Collections::NativeSlice_1<::System::IntPtr> _data; // 0x0
	};
}
