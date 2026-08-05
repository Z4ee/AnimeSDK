#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/LinkedHashMap_2_Entry.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace Foundation
{
	inline static constexpr unsigned int LinkedHashMap_2_ValueEnumerable_TypeDefinitionIndex = 8459;

	template <typename TKey, typename TValue>
	struct LinkedHashMap_2_ValueEnumerable
	{
		::System::Collections::Generic::LinkedList_1<::Foundation::LinkedHashMap_2_Entry<TKey, TValue>>* _order; // 0x0
	};
}
