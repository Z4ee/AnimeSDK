#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntityGetter_5_WithArgs1_TypeDefinitionIndex = 37286;

	template <typename T1, typename T2, typename T3, typename T4, typename TResult>
	struct EcsEntityGetter_5_WithArgs1
	{
		TResult Result; // 0x0
		::System::Func_5<T1, T2, T3, T4, TResult>* _getter; // 0x0
		T2 _args2; // 0x0
		T3 _args3; // 0x0
		T4 _args4; // 0x0
	};
}
