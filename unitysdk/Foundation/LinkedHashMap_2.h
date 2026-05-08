#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/LinkedHashMap_2_Entry.h"
#include "unitysdk/Foundation/LinkedHashMap_2_Enumerator.h"
#include "unitysdk/Foundation/LinkedHashMap_2_KeyEnumerable.h"
#include "unitysdk/Foundation/LinkedHashMap_2_ValueEnumerable.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace Foundation
{
	inline static constexpr unsigned int LinkedHashMap_2_TypeDefinitionIndex = 8233;

	template <typename TKey, typename TValue>
	class LinkedHashMap_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::Foundation::LinkedHashMap_2_Entry<TKey, TValue>>*>* _map; // 0x0
		::System::Collections::Generic::LinkedList_1<::Foundation::LinkedHashMap_2_Entry<TKey, TValue>>* _order; // 0x0
		::System::Boolean _accessOrder; // 0x0
	};
}
