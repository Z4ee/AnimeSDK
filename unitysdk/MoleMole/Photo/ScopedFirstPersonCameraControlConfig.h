#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class FirstPersonCameraConfig; }
namespace MoleMole::Photo { class ScopedFirstPersonCameraMotionConfig; }

#define MOLEMOLE_PHOTO_SCOPEDFIRSTPERSONCAMERACONTROLCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x11780210)
#define MOLEMOLE_PHOTO_SCOPEDFIRSTPERSONCAMERACONTROLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11780230)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int ScopedFirstPersonCameraControlConfig_TypeDefinitionIndex = 40711;

	class ScopedFirstPersonCameraControlConfig : public ::System::Object
	{
	public:
		::MoleMole::Cameras::FirstPersonCameraConfig* cameraConfig; // 0x10
		::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig* motionConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFIRSTPERSONCAMERACONTROLCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFIRSTPERSONCAMERACONTROLCONFIG_GET_ISVALID_OFFSET))(this);
		}
	};
}
