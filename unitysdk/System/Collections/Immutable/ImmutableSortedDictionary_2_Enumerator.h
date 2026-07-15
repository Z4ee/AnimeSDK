#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/RefAsValueType_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableSortedDictionary_2_Builder; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableSortedDictionary_2_Node; }
namespace System::Collections::Immutable { template <typename T> class SecurePooledObject_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableSortedDictionary_2_Enumerator_TypeDefinitionIndex = 7028;

	template <typename TKey, typename TValue>
	struct ImmutableSortedDictionary_2_Enumerator
	{
		::System::Collections::Immutable::ImmutableSortedDictionary_2_Builder<TKey, TValue>* _builder; // 0x0
		::System::Int32 _poolUserId; // 0x0
		::System::Collections::Immutable::ImmutableSortedDictionary_2_Node<TKey, TValue>* _root; // 0x0
		::System::Collections::Immutable::SecurePooledObject_1<::System::Collections::Generic::Stack_1<::System::Collections::Immutable::RefAsValueType_1<::System::Collections::Immutable::ImmutableSortedDictionary_2_Node<TKey, TValue>*>>*>* _stack; // 0x0
		::System::Collections::Immutable::ImmutableSortedDictionary_2_Node<TKey, TValue>* _current; // 0x0
		::System::Int32 _enumeratingBuilderVersion; // 0x0
	};
}
