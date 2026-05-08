#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageRawData_TypeDefinitionIndex = 42072;

	struct alignas(4) MontageRawData
	{
		::System::Single startTime; // 0x10
		::System::Single endTime; // 0x14
		::System::Single speed; // 0x18
		::System::Int32 clipID; // 0x1C
		::System::Boolean loop; // 0x20
		::System::Single fadeinTIme; // 0x24
	};
}
