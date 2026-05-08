#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawPoints2D_Point_TypeDefinitionIndex = 36005;

	struct alignas(4) CameraDebugDrawPoints2D_Point
	{
		::UnityEngine::Vector2 Position; // 0x10
		::System::Single PointSize; // 0x18
		::System::Single PointDepth; // 0x1C
	};
}
