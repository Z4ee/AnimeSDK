#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_HashBucket.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_HashBucket_Enumerator.h"
#include "unitysdk/System/Collections/Immutable/SortedInt32KeyNode_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2_Builder; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_Enumerator_TypeDefinitionIndex = 7002;

	template <typename TKey, typename TValue>
	struct ImmutableDictionary_2_Enumerator
	{
		::System::Collections::Immutable::ImmutableDictionary_2_Builder<TKey, TValue>* _builder; // 0x0
		::System::Collections::Immutable::SortedInt32KeyNode_1_Enumerator<::System::Collections::Immutable::ImmutableDictionary_2_HashBucket<TKey, TValue>> _mapEnumerator; // 0x0
		::System::Collections::Immutable::ImmutableDictionary_2_HashBucket_Enumerator<TKey, TValue> _bucketEnumerator; // 0x0
		::System::Int32 _enumeratingBuilderVersion; // 0x0
	};
}
