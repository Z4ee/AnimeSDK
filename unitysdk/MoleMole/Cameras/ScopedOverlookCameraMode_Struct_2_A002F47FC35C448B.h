#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Cameras { class ScopedOverlookCameraMode; }

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B_TypeDefinitionIndex = 81962;

	struct alignas(8) ScopedOverlookCameraMode_Struct_2_A002F47FC35C448B
	{
		::MoleMole::Cameras::ScopedOverlookCameraMode* Field_2_3; // 0x10
		::UnityEngine::Vector2 Field_2_7; // 0x18
		::PipelineCamera::WorldBasicCameraData Field_2_0; // 0x20
		::PipelineCamera::WorldBasicCameraData Field_2_2; // 0x4C
		::UnityEngine::BoundingSphere Field_2_1; // 0x78
	};
}
