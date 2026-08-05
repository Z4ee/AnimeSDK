#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCDitherStateFragment_TypeDefinitionIndex = 84317;

	struct alignas(4) FNPCDitherStateFragment
	{
		::System::Int32 nearestEntityID; // 0x10
		::System::Single nearestEntityDistance; // 0x14
		::System::Boolean collisionDither; // 0x18
		::System::Boolean playerCollisionDither; // 0x19
		::System::Boolean enableCollisionDither; // 0x1A
	};
}
