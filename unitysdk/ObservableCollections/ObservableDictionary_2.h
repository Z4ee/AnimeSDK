#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedView_2; }
namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableDictionary_2_TypeDefinitionIndex = 25569;

	template <typename TKey, typename TValue>
	class ObservableDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* CollectionChanged; // 0x0
	};
}
