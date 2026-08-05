#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int ScopedFrontCameraControlCameraConfig_TypeDefinitionIndex = 76465;

	struct alignas(4) ScopedFrontCameraControlCameraConfig
	{
		::UnityEngine::Vector2 pitchOffset; // 0x10
		::UnityEngine::Vector2 yawOffset; // 0x18
		::System::Single defaultFieldOfView; // 0x20
		::UnityEngine::Vector2 fieldOfViewRange; // 0x24
		::System::Single nearClipPlane; // 0x2C
		::System::Single pitchSpeed; // 0x30
		::System::Single yawSpeed; // 0x34
		::System::Single interpToSpeed; // 0x38
	};
}
