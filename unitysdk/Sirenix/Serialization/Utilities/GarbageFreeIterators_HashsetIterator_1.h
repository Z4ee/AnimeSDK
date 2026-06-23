#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int GarbageFreeIterators_HashsetIterator_1_TypeDefinitionIndex = 7613;

	template <typename T>
	struct GarbageFreeIterators_HashsetIterator_1
	{
		::System::Boolean isNull; // 0x0
		::System::Collections::Generic::HashSet_1<T>* hashset; // 0x0
		::System::Collections::Generic::HashSet_1_Enumerator<T> enumerator; // 0x0
	};
}
