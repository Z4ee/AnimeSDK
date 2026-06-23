#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TELESCOPECAMERACONTROLCONFIGINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D00680)

namespace MoleMole
{
	inline static constexpr unsigned int TelescopeCameraControlConfigInput_TypeDefinitionIndex = 74071;

	class TelescopeCameraControlConfigInput : public ::System::Object
	{
	public:
		::System::Single DragScreenRotateSensitivity; // 0x10
		::System::Single MouseScrollFOVSensitivity; // 0x14
		::System::Single Fov_Change_Per; // 0x18
		::System::Single Rotate_Pitch; // 0x1C
		::System::Single Rotate_Yaw; // 0x20
		::System::Single FogDensityScale; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELESCOPECAMERACONTROLCONFIGINPUT__CTOR_OFFSET))(this);
		}
	};
}
