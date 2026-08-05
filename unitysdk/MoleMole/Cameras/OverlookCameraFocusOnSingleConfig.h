#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CAMERAS_OVERLOOKCAMERAFOCUSONSINGLECONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1623F540)
#define MOLEMOLE_CAMERAS_OVERLOOKCAMERAFOCUSONSINGLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1623F600)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverlookCameraFocusOnSingleConfig_TypeDefinitionIndex = 80542;

	class OverlookCameraFocusOnSingleConfig : public ::System::Object
	{
	public:
		::System::Single radius; // 0x10
		::System::Single fieldOfView; // 0x14
		::System::Single verticalOffset; // 0x18
		::System::Single pitch; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERLOOKCAMERAFOCUSONSINGLECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERLOOKCAMERAFOCUSONSINGLECONFIG_GET_ISVALID_OFFSET))(this);
		}
	};
}
