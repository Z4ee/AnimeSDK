#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/MemoryHandle.h"
#include "unitysdk/System/Buffers/MemoryManager_1.h"
#include "unitysdk/System/Span_1.h"

namespace FlatBuffers
{
	inline static constexpr unsigned int UnmanagedMemoryManager_1_TypeDefinitionIndex = 6738;

	template <typename T>
	class UnmanagedMemoryManager_1 : public ::System::Buffers::MemoryManager_1<T>
	{
	public:
		T* _pointer; // 0x0
		::System::Int32 _length; // 0x0
	};
}
