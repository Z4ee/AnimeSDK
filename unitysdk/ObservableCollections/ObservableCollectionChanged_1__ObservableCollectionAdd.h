#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/CollectionChangedEvent_1.h"
#include "unitysdk/ObservableCollections/NotifyCollectionChangedEventArgs_1.h"
#include "unitysdk/ObservableCollections/ObservableCollectionObserverBase_2.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace ObservableCollections { template <typename T> class IObservableCollection_1; }
namespace R3 { template <typename T> class Observer_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableCollectionChanged_1__ObservableCollectionAdd_TypeDefinitionIndex = 40069;

	template <typename T>
	class ObservableCollectionChanged_1__ObservableCollectionAdd : public ::ObservableCollections::ObservableCollectionObserverBase_2<T, ::ObservableCollections::CollectionChangedEvent_1<T>>
	{
	public:
	};
}
