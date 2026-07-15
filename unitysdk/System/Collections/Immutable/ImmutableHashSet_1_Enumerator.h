#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_HashBucket.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_HashBucket_Enumerator.h"
#include "unitysdk/System/Collections/Immutable/SortedInt32KeyNode_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1_Builder; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableHashSet_1_Enumerator_TypeDefinitionIndex = 6980;

	template <typename T>
	struct ImmutableHashSet_1_Enumerator
	{
		::System::Collections::Immutable::ImmutableHashSet_1_Builder<T>* _builder; // 0x0
		::System::Collections::Immutable::SortedInt32KeyNode_1_Enumerator<::System::Collections::Immutable::ImmutableHashSet_1_HashBucket<T>> _mapEnumerator; // 0x0
		::System::Collections::Immutable::ImmutableHashSet_1_HashBucket_Enumerator<T> _bucketEnumerator; // 0x0
		::System::Int32 _enumeratingBuilderVersion; // 0x0
	};
}
