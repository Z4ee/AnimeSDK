#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TaskPool_1_TypeDefinitionIndex = 31849;

	template <typename T>
	struct TaskPool_1
	{
		::System::Int32 gate; // 0x0
		::System::Int32 size; // 0x0
		T root; // 0x0
	};
}
