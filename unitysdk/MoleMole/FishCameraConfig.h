#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }

namespace MoleMole
{
	inline static constexpr unsigned int FishCameraConfig_TypeDefinitionIndex = 51361;

	struct alignas(8) FishCameraConfig
	{
		::UnityEngine::Vector3 Euler; // 0x10
		::System::Single Radius; // 0x1C
		::System::Single Fov; // 0x20
		::UnityEngine::Vector3 CameraRotation; // 0x24
		::MoleMole::Cameras::CameraTrackBlending* BlendIn; // 0x30
	};
}
