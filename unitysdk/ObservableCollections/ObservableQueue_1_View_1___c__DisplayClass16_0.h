#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableQueue_1_View_1___c__DisplayClass16_0_TypeDefinitionIndex = 28781;

	template <typename T, typename TView>
	class ObservableQueue_1_View_1___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Func_2<T, TView>* selector; // 0x0
	};
}
