#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryView_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int NativeMemoryRefEnumerator_1_TypeDefinitionIndex = 8867;

	template <typename T>
	struct NativeMemoryRefEnumerator_1
	{
		::Foundation::NativeMemoryView_1<T> _view; // 0x0
		::System::Int32 _index; // 0x0
	};
}
