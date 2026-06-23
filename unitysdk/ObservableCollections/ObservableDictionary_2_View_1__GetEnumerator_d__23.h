#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ObservableCollections { template <typename T1, typename T2, typename T3> class ObservableDictionary_2_View_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableDictionary_2_View_1__GetEnumerator_d__23_TypeDefinitionIndex = 28166;

	template <typename TKey, typename TValue, typename TView>
	class ObservableDictionary_2_View_1__GetEnumerator_d__23 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::ValueTuple_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TView> __2__current; // 0x0
		::ObservableCollections::ObservableDictionary_2_View_1<TKey, TValue, TView>* __4__this; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Boolean __7__wrap2; // 0x0
		::System::Collections::Generic::Dictionary_2_Enumerator<TKey, ::System::ValueTuple_2<TValue, TView>> __7__wrap3; // 0x0
	};
}
