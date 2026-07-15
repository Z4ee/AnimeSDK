#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Stack_1_Enumerator_TypeDefinitionIndex = 3046;

	template <typename T>
	struct Stack_1_Enumerator
	{
		::System::Collections::Generic::Stack_1<T>* _stack; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		T _currentElement; // 0x0
	};
}
