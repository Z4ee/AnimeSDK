#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_SCOPEDFRONTCAMERACONTROLCONFIGINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A946640)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScopedFrontCameraControlConfigInput_TypeDefinitionIndex = 86953;

	class ScopedFrontCameraControlConfigInput : public ::System::Object
	{
	public:
		::System::Single DragScreenRotateSensitivity; // 0x10
		::System::Single MouseScrollFOVSensitivity; // 0x14
		::System::Single Fov_Change_Per; // 0x18
		::System::Single Scale_Move_X; // 0x1C
		::System::Single Scale_Move_Y; // 0x20
		::System::Single Scale_Camera_X; // 0x24
		::System::Single Scale_Camera_Y; // 0x28
		::System::Single Scale_Character_Yaw; // 0x2C
		::System::Single Scale_Character_ArmUp; // 0x30
		::System::Single TwoPointDragFovZoomSensitivity; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCOPEDFRONTCAMERACONTROLCONFIGINPUT__CTOR_OFFSET))(this);
		}
	};
}
