#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Array; }
namespace System { class Object; }

namespace System
{
	inline static constexpr unsigned int Array_InternalEnumerator_1_TypeDefinitionIndex = 138;

	template <typename T>
	struct Array_InternalEnumerator_1
	{
		::System::Array* array; // 0x0
		::System::Int32 idx; // 0x0
	};
}
