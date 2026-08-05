#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawLines2D_Line_TypeDefinitionIndex = 38276;

	struct alignas(4) CameraDebugDrawLines2D_Line
	{
		::UnityEngine::Vector2 LineStart; // 0x10
		::UnityEngine::Vector2 LineEnd; // 0x18
		::System::Single LineDepth; // 0x20
	};
}
