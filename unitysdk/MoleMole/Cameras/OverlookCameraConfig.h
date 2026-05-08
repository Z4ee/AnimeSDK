#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class OverlookCameraFocusOnMultipleAdditionalConfig; }
namespace MoleMole::Cameras { class OverlookCameraFocusOnSingleConfig; }

#define MOLEMOLE_CAMERAS_OVERLOOKCAMERACONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xF95E030)
#define MOLEMOLE_CAMERAS_OVERLOOKCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF95E300)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverlookCameraConfig_TypeDefinitionIndex = 81074;

	class OverlookCameraConfig : public ::System::Object
	{
	public:
		::MoleMole::Cameras::OverlookCameraFocusOnSingleConfig* config; // 0x10
		::MoleMole::Cameras::OverlookCameraFocusOnMultipleAdditionalConfig* additionalConfig; // 0x18
		::MoleMole::Cameras::CameraTrackBlending* blending; // 0x20
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x28
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERLOOKCAMERACONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERLOOKCAMERACONFIG_GET_ISVALID_OFFSET))(this);
		}
	};
}
