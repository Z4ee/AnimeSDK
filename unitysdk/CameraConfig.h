#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int CameraConfig_TypeDefinitionIndex = 80272;

struct alignas(4) CameraConfig
{
	::System::Int32 configID; // 0x10
	::System::Single radius; // 0x14
	::System::Single height; // 0x18
	::System::Single rotationAngle; // 0x1C
};
