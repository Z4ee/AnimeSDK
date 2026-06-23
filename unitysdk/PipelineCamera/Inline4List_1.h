#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int Inline4List_1_TypeDefinitionIndex = 37646;

	template <typename T>
	struct Inline4List_1
	{
		::System::ValueTuple_4<T, T, T, T> _inlineItems; // 0x0
		::Il2CppArray<T>* _items; // 0x0
		::System::Int32 _size; // 0x0
	};
}
