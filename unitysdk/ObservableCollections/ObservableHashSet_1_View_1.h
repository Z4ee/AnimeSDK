#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/NotifyCollectionChangedEventArgs_1.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ObservableCollections { class ICollectionEventDispatcher; }
namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedViewFilter_2; }
namespace ObservableCollections { template <typename T> class INotifyCollectionChangedSynchronizedView_1; }
namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace ObservableCollections { template <typename T> class ObservableHashSet_1; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableHashSet_1_View_1_TypeDefinitionIndex = 28266;

	template <typename T, typename TView>
	class ObservableHashSet_1_View_1 : public ::System::Object
	{
	public:
		::ObservableCollections::ObservableHashSet_1<T>* source; // 0x0
		::System::Func_2<T, TView>* selector; // 0x0
		::System::Collections::Generic::Dictionary_2<T, ::System::ValueTuple_2<T, TView>>* dict; // 0x0
		::ObservableCollections::ISynchronizedViewFilter_2<T, TView>* filter; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<T>* RoutingCollectionChanged; // 0x0
		::System::Action_1<::System::Collections::Specialized::NotifyCollectionChangedAction>* CollectionStateChanged; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
	};
}
