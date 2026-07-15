#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Common/PriorityQueue_1_UnorderedItemsCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Octree::Common { template <typename T> class PriorityQueue_1; }
namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPGTools::Octree::Common
{
	inline static constexpr unsigned int PriorityQueue_1_UnorderedItemsCollection_TypeDefinitionIndex = 47084;

	template <typename TElement>
	class PriorityQueue_1_UnorderedItemsCollection : public ::System::Object
	{
	public:
		::RPGTools::Octree::Common::PriorityQueue_1<TElement>* _queue; // 0x0
	};
}
