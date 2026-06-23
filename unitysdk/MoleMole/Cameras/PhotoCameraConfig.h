#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/PhotoCameraDefaultSetting.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }

#define MOLEMOLE_CAMERAS_PHOTOCAMERACONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13FF1590)
#define MOLEMOLE_CAMERAS_PHOTOCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF1540)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int PhotoCameraConfig_TypeDefinitionIndex = 73748;

	class PhotoCameraConfig : public ::System::Object
	{
	public:
		::System::Single minPitch; // 0x10
		::System::Single maxPitch; // 0x14
		::System::Single minRadius; // 0x18
		::System::Single maxRadius; // 0x1C
		::System::Single maxHorizontalScreenOffset; // 0x20
		::System::Single maxVerticalScreenOffset; // 0x24
		::System::Single minVerticalScreenOffset; // 0x28
		::System::Single minFieldOfView; // 0x2C
		::System::Single maxFieldOfView; // 0x30
		::System::Single aspectRatio; // 0x34
		::MoleMole::Cameras::PhotoCameraDefaultSetting defaultSetting; // 0x38
		::System::Boolean useBlend; // 0x58
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x60
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_PHOTOCAMERACONFIG__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::MoleMole::Cameras::PhotoCameraDefaultSetting a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::PhotoCameraDefaultSetting))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_PHOTOCAMERACONFIG__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}
	};
}
