#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Foundation
{
	inline static constexpr unsigned int InvocableWithRet_2_Impl_1_TypeDefinitionIndex = 9079;

	template <typename T1, typename TResult, typename TA1>
	struct InvocableWithRet_2_Impl_1
	{
		::System::Func_3<T1, TA1, TResult>* _function; // 0x0
		TA1 _data1; // 0x0
	};
}
