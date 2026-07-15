#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_HashBucket.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_HashBucket_Enumerator.h"
#include "unitysdk/System/Collections/Immutable/SortedInt32KeyNode_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2__get_Values_d__27_TypeDefinitionIndex = 7012;

	template <typename TKey, typename TValue>
	class ImmutableDictionary_2__get_Values_d__27 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TValue __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Immutable::ImmutableDictionary_2<TKey, TValue>* __4__this; // 0x0
		::System::Collections::Immutable::SortedInt32KeyNode_1_Enumerator<::System::Collections::Immutable::ImmutableDictionary_2_HashBucket<TKey, TValue>> __7__wrap1; // 0x0
		::System::Collections::Immutable::ImmutableDictionary_2_HashBucket_Enumerator<TKey, TValue> __7__wrap2; // 0x0
	};
}
