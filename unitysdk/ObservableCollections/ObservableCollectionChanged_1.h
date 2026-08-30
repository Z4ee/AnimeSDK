#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/CollectionChangedEvent_1.h"
#include "unitysdk/R3/Observable_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace ObservableCollections { template <typename T> class IObservableCollection_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace System { class IDisposable; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableCollectionChanged_1_TypeDefinitionIndex = 40068;

	template <typename T>
	class ObservableCollectionChanged_1 : public ::R3::Observable_1<::ObservableCollections::CollectionChangedEvent_1<T>>
	{
	public:
		::ObservableCollections::IObservableCollection_1<T>* _collection_P; // 0x0
		::System::Threading::CancellationToken _cancellationToken_P; // 0x0
	};
}
