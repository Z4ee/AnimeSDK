#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableDictionary_2_View_1___c__DisplayClass4_0_TypeDefinitionIndex = 28165;

	template <typename TKey, typename TValue, typename TView>
	class ObservableDictionary_2_View_1___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TView>* selector; // 0x0
	};
}
