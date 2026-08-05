#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/ScopedFrontCameraControlCameraConfig.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class ScopedFrontCameraControlAnimationConfig; }
namespace MoleMole::Photo { class ScopedFrontCameraControlMotionConfig; }

#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x11D61160)
#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11D611C0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int ScopedFrontCameraControlConfig_TypeDefinitionIndex = 62977;

	class ScopedFrontCameraControlConfig : public ::System::Object
	{
	public:
		::MoleMole::Photo::ScopedFrontCameraControlAnimationConfig* animationConfig; // 0x10
		::MoleMole::Photo::ScopedFrontCameraControlCameraConfig cameraConfig; // 0x18
		::MoleMole::Photo::ScopedFrontCameraControlMotionConfig* motionConfig; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLCONFIG_GET_ISVALID_OFFSET))(this);
		}
	};
}
