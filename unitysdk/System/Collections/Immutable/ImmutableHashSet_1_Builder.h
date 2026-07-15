#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_Enumerator.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_HashBucket.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_MutationInput.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_MutationResult.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableHashSet_1_Builder_TypeDefinitionIndex = 6979;

	template <typename T>
	class ImmutableHashSet_1_Builder : public ::System::Object
	{
	public:
		::System::Collections::Immutable::SortedInt32KeyNode_1<::System::Collections::Immutable::ImmutableHashSet_1_HashBucket<T>>* _root; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* _equalityComparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Immutable::ImmutableHashSet_1_HashBucket<T>>* _hashBucketEqualityComparer; // 0x0
		::System::Int32 _count; // 0x0
		::System::Collections::Immutable::ImmutableHashSet_1<T>* _immutable; // 0x0
		::System::Int32 _version; // 0x0
	};
}
