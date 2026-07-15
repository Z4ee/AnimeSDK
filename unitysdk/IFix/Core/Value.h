#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/ValueType.h"
#include "unitysdk/System/ValueType.h"

namespace IFix::Core
{
	inline static constexpr unsigned int Value_TypeDefinitionIndex = 9771;

	struct alignas(4) Value
	{
		::IFix::Core::ValueType Type; // 0x10
		::System::Int32 Value1; // 0x14
		::System::Int32 Value2; // 0x18
	};
}
