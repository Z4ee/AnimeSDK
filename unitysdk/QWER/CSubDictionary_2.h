#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace QWER
{
	inline static constexpr unsigned int CSubDictionary_2_TypeDefinitionIndex = 9684;

	template <typename TKey, typename TValue>
	class CSubDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* m_oItems; // 0x0
		::System::Action_2<TKey, TValue>* _OnItemAdded_k__BackingField; // 0x0
		::System::Action_2<TKey, TValue>* _OnItemRemoved_k__BackingField; // 0x0
		::System::Action_3<TKey, TValue, TValue>* _OnItemModify_k__BackingField; // 0x0
	};
}
