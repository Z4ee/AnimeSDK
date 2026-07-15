#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/SortedDictionary_2_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedDictionary_2_KeyCollection_Enumerator_TypeDefinitionIndex = 3014;

	template <typename TKey, typename TValue>
	struct SortedDictionary_2_KeyCollection_Enumerator
	{
		::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue> _dictEnum; // 0x0
	};
}
