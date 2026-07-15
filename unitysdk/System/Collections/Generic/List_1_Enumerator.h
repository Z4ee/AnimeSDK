#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int List_1_Enumerator_TypeDefinitionIndex = 1564;

	template <typename T>
	struct List_1_Enumerator
	{
		::System::Collections::Generic::List_1<T>* list; // 0x0
		::System::Int32 index; // 0x0
		::System::Int32 version; // 0x0
		T current; // 0x0
	};
}
