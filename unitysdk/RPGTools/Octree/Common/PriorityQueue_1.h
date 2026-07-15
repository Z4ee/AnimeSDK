#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Octree::Common { template <typename T> class PriorityQueue_1_UnorderedItemsCollection; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPGTools::Octree::Common
{
	inline static constexpr unsigned int PriorityQueue_1_TypeDefinitionIndex = 47083;

	template <typename TElement>
	class PriorityQueue_1 : public ::System::Object
	{
	public:
		// static const ::System::Int32 Arity = 0x4; // 0x0
		// static const ::System::Int32 Log2Arity = 0x2; // 0x0
		::Il2CppArray<TElement>* _nodes; // 0x0
		::System::Collections::Generic::IComparer_1<TElement>* _comparer; // 0x0
		::RPGTools::Octree::Common::PriorityQueue_1_UnorderedItemsCollection<TElement>* _unorderedItems; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
	};
}
