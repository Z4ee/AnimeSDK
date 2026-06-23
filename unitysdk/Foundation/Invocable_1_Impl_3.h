#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

namespace Foundation
{
	inline static constexpr unsigned int Invocable_1_Impl_3_TypeDefinitionIndex = 8614;

	template <typename T1, typename TA1, typename TA2, typename TA3>
	struct Invocable_1_Impl_3
	{
		::System::Action_4<T1, TA1, TA2, TA3>* _function; // 0x0
		TA1 _data1; // 0x0
		TA2 _data2; // 0x0
		TA3 _data3; // 0x0
	};
}
