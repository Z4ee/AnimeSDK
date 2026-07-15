#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Immutable/ImmutableSortedDictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableSortedDictionary_2; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableSortedDictionary_2_Builder; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableSortedDictionary_2_Node; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableSortedDictionary_2_TypeDefinitionIndex = 7026;

	template <typename TKey, typename TValue>
	class ImmutableSortedDictionary_2 : public ::System::Object
	{
	public:
		static ::System::Collections::Immutable::ImmutableSortedDictionary_2<TKey, TValue>** StaticGet_Empty()
		{
			return (::System::Collections::Immutable::ImmutableSortedDictionary_2<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableSortedDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Immutable::ImmutableSortedDictionary_2_Node<TKey, TValue>* _root; // 0x0
		::System::Int32 _count; // 0x0
		::System::Collections::Generic::IComparer_1<TKey>* _keyComparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TValue>* _valueComparer; // 0x0
	};
}
