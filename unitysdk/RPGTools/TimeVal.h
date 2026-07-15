#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPGTools
{
	inline static constexpr unsigned int TimeVal_TypeDefinitionIndex = 45153;

	struct alignas(8) TimeVal
	{
		::System::Int64 tv_sec; // 0x10
		::System::Int32 tv_usec; // 0x18
	};
}
