#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Dictionary_2_Entry_TypeDefinitionIndex = 1529;

	template <typename TKey, typename TValue>
	struct Dictionary_2_Entry
	{
		::System::Int32 hashCode; // 0x0
		::System::Int32 next; // 0x0
		TKey key; // 0x0
		TValue value; // 0x0
	};
}
