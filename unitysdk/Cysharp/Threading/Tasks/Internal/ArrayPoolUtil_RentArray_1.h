#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Internal { template <typename T> class ArrayPool_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int ArrayPoolUtil_RentArray_1_TypeDefinitionIndex = 28816;

	template <typename T>
	struct ArrayPoolUtil_RentArray_1
	{
		::Il2CppArray<T>* Array; // 0x0
		::System::Int32 Length; // 0x0
		::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>* pool; // 0x0
	};
}
