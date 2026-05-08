#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedView_2; }
namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableHashSet_1_TypeDefinitionIndex = 25619;

	template <typename T>
	class ObservableHashSet_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<T>* set; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<T>* CollectionChanged; // 0x0
	};
}
