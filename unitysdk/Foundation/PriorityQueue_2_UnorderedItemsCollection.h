#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/PriorityQueue_2_UnorderedItemsCollection_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2; }
namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Foundation
{
	inline static constexpr unsigned int PriorityQueue_2_UnorderedItemsCollection_TypeDefinitionIndex = 8022;

	template <typename TElement, typename TPriority>
	class PriorityQueue_2_UnorderedItemsCollection : public ::System::Object
	{
	public:
		::Foundation::PriorityQueue_2<TElement, TPriority>* _queue; // 0x0
	};
}
