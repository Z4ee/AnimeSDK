#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic
{
	inline static constexpr unsigned int HashSet_1_Slot_TypeDefinitionIndex = 3689;

	template <typename T>
	struct HashSet_1_Slot
	{
		::System::Int32 hashCode; // 0x0
		::System::Int32 next; // 0x0
		T value; // 0x0
	};
}
