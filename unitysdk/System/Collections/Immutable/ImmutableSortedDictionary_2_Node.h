#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Immutable/ImmutableSortedDictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableSortedDictionary_2_Builder; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableSortedDictionary_2_Node; }
namespace System::Collections::Immutable { template <typename T> class IOrderedCollection_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableSortedDictionary_2_Node_TypeDefinitionIndex = 7029;

	template <typename TKey, typename TValue>
	class ImmutableSortedDictionary_2_Node : public ::System::Object
	{
	public:
		static ::System::Collections::Immutable::ImmutableSortedDictionary_2_Node<TKey, TValue>** StaticGet_EmptyNode()
		{
			return (::System::Collections::Immutable::ImmutableSortedDictionary_2_Node<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableSortedDictionary_2_Node_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		TKey _key; // 0x0
		TValue _value; // 0x0
		::System::Boolean _frozen; // 0x0
		::System::Byte _height; // 0x0
		::System::Collections::Immutable::ImmutableSortedDictionary_2_Node<TKey, TValue>* _left; // 0x0
		::System::Collections::Immutable::ImmutableSortedDictionary_2_Node<TKey, TValue>* _right; // 0x0
	};
}
