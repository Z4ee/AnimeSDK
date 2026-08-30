#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/NotifyCollectionChangedEventArgs_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace ObservableCollections { template <typename T> class IObservableCollection_1; }
namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace R3 { template <typename T> class Observer_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableCollectionObserverBase_2_TypeDefinitionIndex = 40070;

	template <typename T, typename TEvent>
	class ObservableCollectionObserverBase_2 : public ::System::Object
	{
	public:
		::ObservableCollections::IObservableCollection_1<T>* collection; // 0x0
		::R3::Observer_1<TEvent>* observer; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<T>* handlerDelegate; // 0x0
	};
}
