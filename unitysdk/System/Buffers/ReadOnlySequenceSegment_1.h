#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"

namespace System::Buffers { template <typename T> class ReadOnlySequenceSegment_1; }

namespace System::Buffers
{
	inline static constexpr unsigned int ReadOnlySequenceSegment_1_TypeDefinitionIndex = 4983;

	template <typename T>
	class ReadOnlySequenceSegment_1 : public ::System::Object
	{
	public:
		::System::ReadOnlyMemory_1<T> _Memory_k__BackingField; // 0x0
		::System::Buffers::ReadOnlySequenceSegment_1<T>* _Next_k__BackingField; // 0x0
		::System::Int64 _RunningIndex_k__BackingField; // 0x0
	};
}
