#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/NotifyCollectionChangedEventArgs_1.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ObservableCollections { class ICollectionEventDispatcher; }
namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedViewFilter_2; }
namespace ObservableCollections { template <typename T> class INotifyCollectionChangedSynchronizedView_1; }
namespace ObservableCollections { template <typename T> class IObservableCollection_1; }
namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace ObservableCollections { template <typename T> class RingBuffer_1; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableRingBuffer_1_View_1_TypeDefinitionIndex = 28144;

	template <typename T, typename TView>
	class ObservableRingBuffer_1_View_1 : public ::System::Object
	{
	public:
		::ObservableCollections::IObservableCollection_1<T>* source; // 0x0
		::System::Func_2<T, TView>* selector; // 0x0
		::System::Boolean reverse; // 0x0
		::ObservableCollections::RingBuffer_1<::System::ValueTuple_2<T, TView>>* ringBuffer; // 0x0
		::ObservableCollections::ISynchronizedViewFilter_2<T, TView>* filter; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<T>* RoutingCollectionChanged; // 0x0
		::System::Action_1<::System::Collections::Specialized::NotifyCollectionChangedAction>* CollectionStateChanged; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
	};
}
