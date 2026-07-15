#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2_TypeDefinitionIndex = 5583;

	template <typename TKey, typename TValue>
	class MapField_2 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::EqualityComparer_1<TValue>** StaticGet_ValueEqualityComparer()
		{
			return (::System::Collections::Generic::EqualityComparer_1<TValue>**)Il2CppClass::FromTypeDefinitionIndex(MapField_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::EqualityComparer_1<TKey>** StaticGet_KeyEqualityComparer()
		{
			return (::System::Collections::Generic::EqualityComparer_1<TKey>**)Il2CppClass::FromTypeDefinitionIndex(MapField_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>* map; // 0x0
		::System::Collections::Generic::LinkedList_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* list; // 0x0
	};
}
