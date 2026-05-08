#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ObservableCollections::Internal { template <typename T1, typename T2> class NotifyCollectionChangedSynchronizedView_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int NotifyCollectionChangedSynchronizedView_2__GetEnumerator_d__21_TypeDefinitionIndex = 25681;

	template <typename T, typename TView>
	class NotifyCollectionChangedSynchronizedView_2__GetEnumerator_d__21 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TView __2__current; // 0x0
		::ObservableCollections::Internal::NotifyCollectionChangedSynchronizedView_2<T, TView>* __4__this; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T, TView>>* __7__wrap1; // 0x0
	};
}
