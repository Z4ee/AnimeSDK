#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedView_2; }
namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace ObservableCollections { template <typename T> class RingBuffer_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableRingBuffer_1_TypeDefinitionIndex = 28689;

	template <typename T>
	class ObservableRingBuffer_1 : public ::System::Object
	{
	public:
		::ObservableCollections::RingBuffer_1<T>* buffer; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<T>* CollectionChanged; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
	};
}
