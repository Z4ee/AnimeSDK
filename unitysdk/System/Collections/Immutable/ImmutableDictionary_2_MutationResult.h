#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_HashBucket.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_MutationResult_TypeDefinitionIndex = 7007;

	template <typename TKey, typename TValue>
	struct ImmutableDictionary_2_MutationResult
	{
		::System::Collections::Immutable::SortedInt32KeyNode_1<::System::Collections::Immutable::ImmutableDictionary_2_HashBucket<TKey, TValue>>* _root; // 0x0
		::System::Int32 _countAdjustment; // 0x0
	};
}
