#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }

#define MOLEMOLE_CAMERAS_FIXEDCAMERACONFIG_TRYREADCAM_OFFSET UNITYSDK_OFFSET(0x141D7CB0)
#define MOLEMOLE_CAMERAS_FIXEDCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x141D7EB0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int FixedCameraConfig_TypeDefinitionIndex = 68926;

	class FixedCameraConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 location; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::System::Single fieldOfView; // 0x2C
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x30
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x38

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
