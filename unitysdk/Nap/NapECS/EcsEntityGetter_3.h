#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntityGetter_3_TypeDefinitionIndex = 35755;

	template <typename T1, typename T2, typename TResult>
	struct EcsEntityGetter_3
	{
		TResult Result; // 0x0
		::System::Func_3<T1, T2, TResult>* _getter; // 0x0
	};
}
