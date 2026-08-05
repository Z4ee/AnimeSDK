#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntityGetter_2_TypeDefinitionIndex = 37979;

	template <typename T1, typename TResult>
	struct EcsEntityGetter_2
	{
		TResult Result; // 0x0
		::System::Func_2<T1, TResult>* _getter; // 0x0
	};
}
