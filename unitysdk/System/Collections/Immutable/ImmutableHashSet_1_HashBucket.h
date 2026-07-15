#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableList_1_Node; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableHashSet_1_HashBucket_TypeDefinitionIndex = 6982;

	template <typename T>
	struct ImmutableHashSet_1_HashBucket
	{
		T _firstValue; // 0x0
		::System::Collections::Immutable::ImmutableList_1_Node<T>* _additionalElements; // 0x0
	};
}
