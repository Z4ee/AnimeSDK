#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/ValueType.h"

namespace RVO
{
	inline static constexpr unsigned int RVOAgentParam_TypeDefinitionIndex = 42714;

	struct alignas(4) RVOAgentParam
	{
		::RVO::Vector2 Position; // 0x10
		::RVO::Vector2 Velocity; // 0x18
		::System::Single Height; // 0x20
		::System::Single MaxSpeed; // 0x24
		::System::Single Radius; // 0x28
		::System::Single TimeHorizon; // 0x2C
		::System::Single TimeHorizonObst; // 0x30
		::System::Single NeighborDist; // 0x34
		::System::Int32 MaxNeighbors; // 0x38
	};
}
