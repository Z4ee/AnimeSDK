#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/RefAsValueType_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableSortedSet_1_Builder; }
namespace System::Collections::Immutable { template <typename T> class ImmutableSortedSet_1_Node; }
namespace System::Collections::Immutable { template <typename T> class SecurePooledObject_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableSortedSet_1_Enumerator_TypeDefinitionIndex = 7034;

	template <typename T>
	struct ImmutableSortedSet_1_Enumerator
	{
		::System::Collections::Immutable::ImmutableSortedSet_1_Builder<T>* _builder; // 0x0
		::System::Int32 _poolUserId; // 0x0
		::System::Boolean _reverse; // 0x0
		::System::Collections::Immutable::ImmutableSortedSet_1_Node<T>* _root; // 0x0
		::System::Collections::Immutable::SecurePooledObject_1<::System::Collections::Generic::Stack_1<::System::Collections::Immutable::RefAsValueType_1<::System::Collections::Immutable::ImmutableSortedSet_1_Node<T>*>>*>* _stack; // 0x0
		::System::Collections::Immutable::ImmutableSortedSet_1_Node<T>* _current; // 0x0
		::System::Int32 _enumeratingBuilderVersion; // 0x0
	};
}
