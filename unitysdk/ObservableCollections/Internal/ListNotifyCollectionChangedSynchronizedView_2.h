#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/Internal/NotifyCollectionChangedSynchronizedView_2.h"

namespace ObservableCollections { class ICollectionEventDispatcher; }
namespace ObservableCollections { template <typename T1, typename T2> class ObservableList_1_View_1; }
namespace System { class Array; }
namespace System { class Object; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int ListNotifyCollectionChangedSynchronizedView_2_TypeDefinitionIndex = 25679;

	template <typename T, typename TView>
	class ListNotifyCollectionChangedSynchronizedView_2 : public ::ObservableCollections::Internal::NotifyCollectionChangedSynchronizedView_2<T, TView>
	{
	public:
		::ObservableCollections::ObservableList_1_View_1<T, TView>* view; // 0x0
	};
}
