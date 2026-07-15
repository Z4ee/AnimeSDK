#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_HashBucket.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_HashBucket_Enumerator_Position.h"
#include "unitysdk/System/Collections/Immutable/ImmutableList_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_HashBucket_Enumerator_TypeDefinitionIndex = 7004;

	template <typename TKey, typename TValue>
	struct ImmutableDictionary_2_HashBucket_Enumerator
	{
		::System::Collections::Immutable::ImmutableDictionary_2_HashBucket<TKey, TValue> _bucket; // 0x0
		::System::Collections::Immutable::ImmutableDictionary_2_HashBucket_Enumerator_Position<TKey, TValue> _currentPosition; // 0x0
		::System::Collections::Immutable::ImmutableList_1_Enumerator<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> _additionalEnumerator; // 0x0
	};
}
