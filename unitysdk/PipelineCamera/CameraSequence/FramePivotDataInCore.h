#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTDATAINCORE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E830)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FramePivotDataInCore_TypeDefinitionIndex = 38644;

	struct alignas(4) FramePivotDataInCore
	{
		::System::Single FieldOfView; // 0x10
		::System::Single Radius; // 0x14
		::UnityEngine::Vector2 Offset; // 0x18

		::System::Void _ctor(::System::Single fieldOfView, ::System::Single radius, ::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTDATAINCORE__CTOR_OFFSET))(this, fieldOfView, radius, offset);
		}
	};
}
