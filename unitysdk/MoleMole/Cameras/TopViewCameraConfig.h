#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }

#define MOLEMOLE_CAMERAS_TOPVIEWCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x150E2FA0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int TopViewCameraConfig_TypeDefinitionIndex = 63618;

	class TopViewCameraConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 location; // 0x10
		::UnityEngine::Vector3 euler; // 0x1C
		::System::Single fieldOfView; // 0x28
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x30
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x38
		::System::Boolean enableDrag; // 0x40
		::System::Single maxDragSpeed; // 0x44
		::System::Single dragScreenRatio; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_TOPVIEWCAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
