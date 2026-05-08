#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawLines3D_Line_TypeDefinitionIndex = 36023;

	struct alignas(4) CameraDebugDrawLines3D_Line
	{
		::UnityEngine::Vector3 LineStart; // 0x10
		::UnityEngine::Vector3 LineEnd; // 0x1C
		::UnityEngine::Color LineColor; // 0x28
	};
}
