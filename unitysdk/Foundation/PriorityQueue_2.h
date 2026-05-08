#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2_UnorderedItemsCollection; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Foundation
{
	inline static constexpr unsigned int PriorityQueue_2_TypeDefinitionIndex = 7929;

	template <typename TElement, typename TPriority>
	class PriorityQueue_2 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::ValueTuple_2<TElement, TPriority>>* _nodes; // 0x0
		::System::Collections::Generic::IComparer_1<TPriority>* _comparer; // 0x0
		::Foundation::PriorityQueue_2_UnorderedItemsCollection<TElement, TPriority>* _unorderedItems; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		// static const ::System::Int32 Arity = 0x4; // 0x0
		// static const ::System::Int32 Log2Arity = 0x2; // 0x0
	};
}
