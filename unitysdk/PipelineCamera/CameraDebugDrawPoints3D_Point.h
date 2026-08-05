#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawPoints3D_Point_TypeDefinitionIndex = 38289;

	struct alignas(4) CameraDebugDrawPoints3D_Point
	{
		::UnityEngine::Vector3 Position; // 0x10
		::System::Single PointSize; // 0x1C
		::UnityEngine::Color PointColor; // 0x20
		::System::Boolean WireFrame; // 0x30
	};
}
