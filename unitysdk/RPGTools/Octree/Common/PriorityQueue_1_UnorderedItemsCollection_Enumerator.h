#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPGTools::Octree::Common { template <typename T> class PriorityQueue_1; }
namespace System { class Object; }

namespace RPGTools::Octree::Common
{
	inline static constexpr unsigned int PriorityQueue_1_UnorderedItemsCollection_Enumerator_TypeDefinitionIndex = 47085;

	template <typename TElement>
	struct PriorityQueue_1_UnorderedItemsCollection_Enumerator
	{
		::RPGTools::Octree::Common::PriorityQueue_1<TElement>* _queue; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		TElement _Current_k__BackingField; // 0x0
	};
}
