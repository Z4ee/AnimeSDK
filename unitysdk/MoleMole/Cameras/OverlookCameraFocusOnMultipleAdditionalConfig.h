#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96FABCE3BF07E6CB.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CAMERAS_OVERLOOKCAMERAFOCUSONMULTIPLEADDITIONALCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xFE98A70)
#define MOLEMOLE_CAMERAS_OVERLOOKCAMERAFOCUSONMULTIPLEADDITIONALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFE98B90)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverlookCameraFocusOnMultipleAdditionalConfig_TypeDefinitionIndex = 81411;

	class OverlookCameraFocusOnMultipleAdditionalConfig : public ::System::Object
	{
	public:
		::System::Boolean fixMainOffset; // 0x10
		::System::Single minRadius; // 0x14
		::System::Single maxRadius; // 0x18
		::System::Single minFieldOfView; // 0x1C
		::System::Single maxFieldOfView; // 0x20
		::System::Single maxHorizontalOffset; // 0x24
		::System::Single maxVerticalOffset; // 0x28
		::System::Single damping; // 0x2C
		::Enum_3_96FABCE3BF07E6CB frameMode; // 0x30
		::System::Single additionalWeight; // 0x34
		::System::Single maxDeltaYaw; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERLOOKCAMERAFOCUSONMULTIPLEADDITIONALCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERLOOKCAMERAFOCUSONMULTIPLEADDITIONALCONFIG_GET_ISVALID_OFFSET))(this);
		}
	};
}
