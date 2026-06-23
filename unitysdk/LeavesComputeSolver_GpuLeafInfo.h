#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int LeavesComputeSolver_GpuLeafInfo_TypeDefinitionIndex = 27085;

struct alignas(4) LeavesComputeSolver_GpuLeafInfo
{
	::System::Single age; // 0x10
	::System::UInt32 alive; // 0x14
	::System::UInt32 state; // 0x18
	::System::Single restAngle; // 0x1C
	::System::Single invLeafMass; // 0x20
};
