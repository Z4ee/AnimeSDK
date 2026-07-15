#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Buffers
{
	inline static constexpr unsigned int ReadOnlySequence_1_SequenceType_TypeDefinitionIndex = 4981;

	enum class ReadOnlySequence_1_SequenceType : ::System::Int32
	{
		MultiSegment = 0,
		Array = 1,
		MemoryManager = 2,
		String = 3,
		Empty = 4,
	};
}
