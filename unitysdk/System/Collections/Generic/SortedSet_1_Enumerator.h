#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1_Node; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedSet_1_Enumerator_TypeDefinitionIndex = 3037;

	template <typename T>
	struct SortedSet_1_Enumerator
	{
		static ::System::Collections::Generic::SortedSet_1_Node<T>** StaticGet_s_dummyNode()
		{
			return (::System::Collections::Generic::SortedSet_1_Node<T>**)Il2CppClass::FromTypeDefinitionIndex(SortedSet_1_Enumerator_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::SortedSet_1<T>* _tree; // 0x0
		::System::Int32 _version; // 0x0
		::System::Collections::Generic::Stack_1<::System::Collections::Generic::SortedSet_1_Node<T>*>* _stack; // 0x0
		::System::Collections::Generic::SortedSet_1_Node<T>* _current; // 0x0
		::System::Boolean _reverse; // 0x0
	};
}
