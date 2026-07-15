#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_CountType.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_HashBucket.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableHashSet_1_MutationResult_TypeDefinitionIndex = 6987;

	template <typename T>
	struct ImmutableHashSet_1_MutationResult
	{
		::System::Collections::Immutable::SortedInt32KeyNode_1<::System::Collections::Immutable::ImmutableHashSet_1_HashBucket<T>>* _root; // 0x0
		::System::Int32 _count; // 0x0
		::System::Collections::Immutable::ImmutableHashSet_1_CountType<T> _countType; // 0x0
	};
}
