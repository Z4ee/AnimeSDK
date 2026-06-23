#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace LyraSector { template <typename T1, typename T2> class CollectionsUtils_PriorityQueue_2; }
namespace System { class Object; }

namespace LyraSector
{
	inline static constexpr unsigned int CollectionsUtils_PriorityQueue_2_UnorderedItemsCollection_Enumerator_TypeDefinitionIndex = 27146;

	template <typename TElement, typename TPriority>
	struct CollectionsUtils_PriorityQueue_2_UnorderedItemsCollection_Enumerator
	{
		::LyraSector::CollectionsUtils_PriorityQueue_2<TElement, TPriority>* _queue; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		::System::ValueTuple_2<TElement, TPriority> _current; // 0x0
	};
}
