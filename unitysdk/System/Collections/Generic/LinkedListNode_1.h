#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int LinkedListNode_1_TypeDefinitionIndex = 3008;

	template <typename T>
	class LinkedListNode_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<T>* list; // 0x0
		::System::Collections::Generic::LinkedListNode_1<T>* next; // 0x0
		::System::Collections::Generic::LinkedListNode_1<T>* prev; // 0x0
		T item; // 0x0
	};
}
