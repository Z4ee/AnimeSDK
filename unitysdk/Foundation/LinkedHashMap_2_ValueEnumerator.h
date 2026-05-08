#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/LinkedHashMap_2_Entry.h"
#include "unitysdk/System/Collections/Generic/LinkedList_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace Foundation
{
	inline static constexpr unsigned int LinkedHashMap_2_ValueEnumerator_TypeDefinitionIndex = 8235;

	template <typename TKey, typename TValue>
	struct LinkedHashMap_2_ValueEnumerator
	{
		::System::Collections::Generic::LinkedList_1_Enumerator<::Foundation::LinkedHashMap_2_Entry<TKey, TValue>> _inner; // 0x0
	};
}
