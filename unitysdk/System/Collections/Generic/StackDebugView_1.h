#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int StackDebugView_1_TypeDefinitionIndex = 3997;

	template <typename T>
	class StackDebugView_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<T>* _stack; // 0x0
	};
}
