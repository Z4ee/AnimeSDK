#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntityGetter_5_TypeDefinitionIndex = 35673;

	template <typename T1, typename T2, typename T3, typename T4, typename TResult>
	struct EcsEntityGetter_5
	{
		TResult Result; // 0x0
		::System::Func_5<T1, T2, T3, T4, TResult>* _getter; // 0x0
	};
}
