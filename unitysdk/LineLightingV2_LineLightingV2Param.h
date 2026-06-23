#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int LineLightingV2_LineLightingV2Param_TypeDefinitionIndex = 34657;

struct alignas(4) LineLightingV2_LineLightingV2Param
{
	::System::Single altRotation; // 0x10
	::System::Single ampX; // 0x14
	::System::Single ampY; // 0x18
	::System::Single ampZ; // 0x1C
	::System::Single displacement; // 0x20
	::System::Single detail; // 0x24
	::System::Single curveAmp; // 0x28
};
