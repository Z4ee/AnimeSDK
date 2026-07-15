#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableSortedSet_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Immutable { template <typename T> class IOrderedCollection_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableSortedSet_1_Builder; }
namespace System::Collections::Immutable { template <typename T> class ImmutableSortedSet_1_Node; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableSortedSet_1_Node_TypeDefinitionIndex = 7035;

	template <typename T>
	class ImmutableSortedSet_1_Node : public ::System::Object
	{
	public:
		static ::System::Collections::Immutable::ImmutableSortedSet_1_Node<T>** StaticGet_EmptyNode()
		{
			return (::System::Collections::Immutable::ImmutableSortedSet_1_Node<T>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableSortedSet_1_Node_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		T _key; // 0x0
		::System::Boolean _frozen; // 0x0
		::System::Byte _height; // 0x0
		::System::Int32 _count; // 0x0
		::System::Collections::Immutable::ImmutableSortedSet_1_Node<T>* _left; // 0x0
		::System::Collections::Immutable::ImmutableSortedSet_1_Node<T>* _right; // 0x0
	};
}
