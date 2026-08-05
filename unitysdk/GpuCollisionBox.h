#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

inline static constexpr unsigned int GpuCollisionBox_TypeDefinitionIndex = 27900;

struct alignas(4) GpuCollisionBox
{
	// static const ::System::Int32 Stride = 0x50; // 0x0
	::UnityEngine::Vector4 center; // 0x10
	::UnityEngine::Vector4 halfExtents; // 0x20
	::UnityEngine::Vector4 axisX; // 0x30
	::UnityEngine::Vector4 axisY; // 0x40
	::UnityEngine::Vector4 axisZ; // 0x50
};
