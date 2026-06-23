#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2; }
namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int PriorityQueue_2_UnorderedItemsCollection_Enumerator_TypeDefinitionIndex = 8167;

	template <typename TElement, typename TPriority>
	struct PriorityQueue_2_UnorderedItemsCollection_Enumerator
	{
		::Foundation::PriorityQueue_2<TElement, TPriority>* _queue; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		::System::ValueTuple_2<TElement, TPriority> _current; // 0x0
	};
}
