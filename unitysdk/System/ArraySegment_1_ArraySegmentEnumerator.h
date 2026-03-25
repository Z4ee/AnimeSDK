#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int ArraySegment_1_ArraySegmentEnumerator_TypeDefinitionIndex = 198;

	template <typename T>
	class ArraySegment_1_ArraySegmentEnumerator : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _start; // 0x0
		::System::Int32 _end; // 0x0
		::System::Int32 _current; // 0x0
	};
}
