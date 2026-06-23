#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int GarbageFreeIterators_DictionaryValueIterator_2_TypeDefinitionIndex = 7615;

	template <typename T1, typename T2>
	struct GarbageFreeIterators_DictionaryValueIterator_2
	{
		::System::Collections::Generic::Dictionary_2<T1, T2>* dictionary; // 0x0
		::System::Collections::Generic::Dictionary_2_Enumerator<T1, T2> enumerator; // 0x0
		::System::Boolean isNull; // 0x0
	};
}
