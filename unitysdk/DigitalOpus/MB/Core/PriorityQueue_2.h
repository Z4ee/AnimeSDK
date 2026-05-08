#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { template <typename T1, typename T2> class PriorityQueue_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int PriorityQueue_2_TypeDefinitionIndex = 85077;

	template <typename TPriority, typename TValue>
	class PriorityQueue_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TPriority, TValue>>* _baseHeap; // 0x0
		::System::Collections::Generic::IComparer_1<TPriority>* _comparer; // 0x0
	};
}
