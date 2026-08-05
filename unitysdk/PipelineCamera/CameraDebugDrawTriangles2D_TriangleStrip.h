#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraDebugDrawTriangles2D_Triangle.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawTriangles2D_TriangleStrip_TypeDefinitionIndex = 38280;

	struct alignas(4) CameraDebugDrawTriangles2D_TriangleStrip
	{
		::PipelineCamera::CameraDebugDrawTriangles2D_Triangle First; // 0x10
		::System::Int32 Begin; // 0x2C
		::System::Int32 End; // 0x30
	};
}
