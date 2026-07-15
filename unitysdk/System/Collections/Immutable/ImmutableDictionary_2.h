#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_HashBucket.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_KeyCollisionBehavior.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_MutationInput.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_MutationResult.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2_Builder; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2_Comparers; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_TypeDefinitionIndex = 6997;

	template <typename TKey, typename TValue>
	class ImmutableDictionary_2 : public ::System::Object
	{
	public:
		static ::System::Collections::Immutable::ImmutableDictionary_2<TKey, TValue>** StaticGet_Empty()
		{
			return (::System::Collections::Immutable::ImmutableDictionary_2<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Immutable::ImmutableDictionary_2_HashBucket<TKey, TValue>>>** StaticGet_s_FreezeBucketAction()
		{
			return (::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Immutable::ImmutableDictionary_2_HashBucket<TKey, TValue>>>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 _count; // 0x0
		::System::Collections::Immutable::SortedInt32KeyNode_1<::System::Collections::Immutable::ImmutableDictionary_2_HashBucket<TKey, TValue>>* _root; // 0x0
		::System::Collections::Immutable::ImmutableDictionary_2_Comparers<TKey, TValue>* _comparers; // 0x0
	};
}
