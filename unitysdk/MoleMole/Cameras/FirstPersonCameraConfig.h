#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/FirstPersonCameraDefaultSetting.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CAMERAS_FIRSTPERSONCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13EBF760)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int FirstPersonCameraConfig_TypeDefinitionIndex = 60846;

	class FirstPersonCameraConfig : public ::System::Object
	{
	public:
		::System::Single minPitch; // 0x10
		::System::Single maxPitch; // 0x14
		::System::Single minFieldOfView; // 0x18
		::System::Single maxFieldOfView; // 0x1C
		::System::Single avatarHeight; // 0x20
		::System::Single nearClipPlane; // 0x24
		::MoleMole::Cameras::FirstPersonCameraDefaultSetting defaultSetting; // 0x28
		::System::Boolean useYawLimit; // 0x30
		::System::Single minYawOffset; // 0x34
		::System::Single maxYawOffset; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_FIRSTPERSONCAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
