#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::DataStructures
{
	inline static constexpr unsigned int HashSet_1_ElementCount_TypeDefinitionIndex = 8290;

	template <typename T>
	struct HashSet_1_ElementCount
	{
		::System::Int32 uniqueCount; // 0x0
		::System::Int32 unfoundCount; // 0x0
	};
}
