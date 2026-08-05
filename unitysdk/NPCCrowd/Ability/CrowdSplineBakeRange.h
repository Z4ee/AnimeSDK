#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CrowdSplineBakeRange_TypeDefinitionIndex = 40742;

	struct alignas(4) CrowdSplineBakeRange
	{
		::System::Int32 Offset; // 0x10
		::System::Int32 Count; // 0x14
		::System::Single TotalDistance; // 0x18
	};
}
