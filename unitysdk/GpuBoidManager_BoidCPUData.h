#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int GpuBoidManager_BoidCPUData_TypeDefinitionIndex = 27468;

struct alignas(4) GpuBoidManager_BoidCPUData
{
	::UnityEngine::Vector3 position; // 0x10
	::System::Single pad0; // 0x1C
	::UnityEngine::Vector3 velocity; // 0x20
	::System::Single pad1; // 0x2C
};
