#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int FreezedView_2___c__DisplayClass14_0_TypeDefinitionIndex = 28062;

	template <typename T, typename TView>
	class FreezedView_2___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Func_2<T, TView>* selector; // 0x0
	};
}
