#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

namespace Foundation
{
	inline static constexpr unsigned int Invocable_1_Impl_2_TypeDefinitionIndex = 8615;

	template <typename T1, typename TA1, typename TA2>
	struct Invocable_1_Impl_2
	{
		::System::Action_3<T1, TA1, TA2>* _function; // 0x0
		TA1 _data1; // 0x0
		TA2 _data2; // 0x0
	};
}
