#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int LinkedList_1_Enumerator_TypeDefinitionIndex = 3007;

	template <typename T>
	struct LinkedList_1_Enumerator
	{
		::System::Collections::Generic::LinkedList_1<T>* _list; // 0x0
		::System::Collections::Generic::LinkedListNode_1<T>* _node; // 0x0
		::System::Int32 _version; // 0x0
		T _current; // 0x0
		::System::Int32 _index; // 0x0
	};
}
