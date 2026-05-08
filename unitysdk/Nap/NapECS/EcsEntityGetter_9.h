#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Func_9; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntityGetter_9_TypeDefinitionIndex = 35716;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename TResult>
	struct EcsEntityGetter_9
	{
		TResult Result; // 0x0
		::System::Func_9<T1, T2, T3, T4, T5, T6, T7, T8, TResult>* _getter; // 0x0
	};
}
