#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/CollectionsUtils_PriorityQueue_2_UnorderedItemsCollection_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace LyraSector { template <typename T1, typename T2> class CollectionsUtils_PriorityQueue_2; }
namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace LyraSector
{
	inline static constexpr unsigned int CollectionsUtils_PriorityQueue_2_UnorderedItemsCollection_TypeDefinitionIndex = 29673;

	template <typename TElement, typename TPriority>
	class CollectionsUtils_PriorityQueue_2_UnorderedItemsCollection : public ::System::Object
	{
	public:
		::LyraSector::CollectionsUtils_PriorityQueue_2<TElement, TPriority>* _queue; // 0x0
	};
}
