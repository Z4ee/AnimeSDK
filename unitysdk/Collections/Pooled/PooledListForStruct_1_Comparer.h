#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledListForStruct_1_Comparer_TypeDefinitionIndex = 5098;

	template <typename T>
	struct PooledListForStruct_1_Comparer
	{
		::System::Func_3<T, T, ::System::Int32>* _comparison; // 0x0
	};
}
