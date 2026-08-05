#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ObservableCollections::Internal { template <typename T1, typename T2, typename T3> class SortedViewViewComparer_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int SortedViewViewComparer_3__GetEnumerator_d__24_TypeDefinitionIndex = 28848;

	template <typename T, typename TKey, typename TView>
	class SortedViewViewComparer_3__GetEnumerator_d__24 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::ValueTuple_2<T, TView> __2__current; // 0x0
		::ObservableCollections::Internal::SortedViewViewComparer_3<T, TKey, TView>* __4__this; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Boolean __7__wrap2; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::ValueTuple_2<TView, TKey>, ::System::ValueTuple_2<T, TView>>>* __7__wrap3; // 0x0
	};
}
