#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Queue_1_Enumerator_TypeDefinitionIndex = 3010;

	template <typename T>
	struct Queue_1_Enumerator
	{
		::System::Collections::Generic::Queue_1<T>* _q; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		T _currentElement; // 0x0
	};
}
