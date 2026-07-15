#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/SequencePosition.h"
#include "unitysdk/System/ValueType.h"

namespace System::Buffers
{
	inline static constexpr unsigned int ReadOnlySequence_1_Enumerator_TypeDefinitionIndex = 4980;

	template <typename T>
	struct ReadOnlySequence_1_Enumerator
	{
		::System::Buffers::ReadOnlySequence_1<T> _sequence; // 0x0
		::System::SequencePosition _next; // 0x0
		::System::ReadOnlyMemory_1<T> _currentMemory; // 0x0
	};
}
