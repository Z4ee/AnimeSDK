#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int ResizableArray_1_TypeDefinitionIndex = 28679;

	template <typename T>
	struct ResizableArray_1
	{
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 count; // 0x0
	};
}
