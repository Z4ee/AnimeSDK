#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Value.h"
#include "unitysdk/System/ValueType.h"

namespace IFix::Core
{
	inline static constexpr unsigned int UnmanagedStack_TypeDefinitionIndex = 9785;

	struct alignas(8) UnmanagedStack
	{
		::IFix::Core::Value* Base; // 0x10
		::IFix::Core::Value* Top; // 0x18
	};
}
