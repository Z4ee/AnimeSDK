#pragma once
#include "unitysdk/unitysdk.h"

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int DefaultIfEmpty_1__DefaultIfEmpty_IteratingState_TypeDefinitionIndex = 44196;

	enum class DefaultIfEmpty_1__DefaultIfEmpty_IteratingState : ::System::Byte
	{
		Empty = 0x0,
		Iterating = 0x1,
		Completed = 0x2,
	};
}
