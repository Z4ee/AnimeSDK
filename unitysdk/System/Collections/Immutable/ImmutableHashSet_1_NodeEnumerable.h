#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_HashBucket.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableHashSet_1_NodeEnumerable_TypeDefinitionIndex = 6988;

	template <typename T>
	struct ImmutableHashSet_1_NodeEnumerable
	{
		::System::Collections::Immutable::SortedInt32KeyNode_1<::System::Collections::Immutable::ImmutableHashSet_1_HashBucket<T>>* _root; // 0x0
	};
}
