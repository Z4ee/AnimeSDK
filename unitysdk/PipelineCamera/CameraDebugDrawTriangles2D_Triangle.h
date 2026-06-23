#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawTriangles2D_Triangle_TypeDefinitionIndex = 37618;

	struct alignas(4) CameraDebugDrawTriangles2D_Triangle
	{
		::UnityEngine::Vector2 VertexA; // 0x10
		::UnityEngine::Vector2 VertexB; // 0x18
		::UnityEngine::Vector2 VertexC; // 0x20
		::System::Single TriangleDepth; // 0x28
	};
}
