#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SRDebugger::UI::Controls::Data
{
	inline static constexpr unsigned int NumberControl_ValueRange_TypeDefinitionIndex = 36493;

	struct alignas(8) NumberControl_ValueRange
	{
		::System::Double MaxValue; // 0x10
		::System::Double MinValue; // 0x18
	};
}
