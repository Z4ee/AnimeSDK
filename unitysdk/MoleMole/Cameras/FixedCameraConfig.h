#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }

#define MOLEMOLE_CAMERAS_FIXEDCAMERACONFIG_TRYREADCAM_OFFSET UNITYSDK_OFFSET(0x1279F480)
#define MOLEMOLE_CAMERAS_FIXEDCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1279F680)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int FixedCameraConfig_TypeDefinitionIndex = 55057;

	class FixedCameraConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 location; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::System::Single fieldOfView; // 0x2C
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x30
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x38
		::System::Boolean enableCameraShake; // 0x40
		::System::Single cameraShakeRatio; // 0x44
		::System::Boolean enableCameraZoom; // 0x48
		::System::Single cameraZoomRatio; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_FIXEDCAMERACONFIG__CTOR_OFFSET))(this);
		}

		::System::Void TryReadCam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_FIXEDCAMERACONFIG_TRYREADCAM_OFFSET))(this);
		}
	};
}
