#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2_Comparers; }
namespace System::Collections::Immutable { template <typename T> class ImmutableList_1_Node; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_HashBucket_TypeDefinitionIndex = 7003;

	template <typename TKey, typename TValue>
	struct ImmutableDictionary_2_HashBucket
	{
		::System::Collections::Generic::KeyValuePair_2<TKey, TValue> _firstValue; // 0x0
		::System::Collections::Immutable::ImmutableList_1_Node<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* _additionalElements; // 0x0
	};
}
