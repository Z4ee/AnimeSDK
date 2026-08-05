#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraDebugDrawLines2D_Line.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugDrawLines2D_LineStrip_TypeDefinitionIndex = 38277;

	struct alignas(4) CameraDebugDrawLines2D_LineStrip
	{
		::PipelineCamera::CameraDebugDrawLines2D_Line First; // 0x10
		::System::Int32 Begin; // 0x24
		::System::Int32 End; // 0x28
	};
}
