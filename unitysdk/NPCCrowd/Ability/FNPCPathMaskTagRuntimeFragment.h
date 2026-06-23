#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCPathMaskTagRuntimeFragment_TypeDefinitionIndex = 65672;

	struct alignas(4) FNPCPathMaskTagRuntimeFragment
	{
		::System::Int32 lastPathId; // 0x10
		::System::Int16 lastControlPointIndex; // 0x14
		::System::Int32 lastMask; // 0x18
		::System::UInt32 activeTagBits; // 0x1C
	};
}
