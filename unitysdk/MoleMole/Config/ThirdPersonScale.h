#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_THIRDPERSONSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1272BA70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ThirdPersonScale_TypeDefinitionIndex = 82616;

	class ThirdPersonScale : public ::System::Object
	{
	public:
		::System::Single DragScreenRotateSensitivity; // 0x10
		::System::Single TwoPointDragScreenZoomSensitivity; // 0x14
		::System::Single MouseScrollZoomSensitivity; // 0x18
		::System::Single Fov_Change_Per; // 0x1C
		::System::Single Pitch; // 0x20
		::System::Single Yaw; // 0x24
		::System::Single Roll; // 0x28
		::System::Single MoveVertical; // 0x2C
		::System::Single MoveHorizontal; // 0x30
		::System::Single RotateVertical; // 0x34
		::System::Single RotateHorizontal; // 0x38
		::System::Single Forward; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_THIRDPERSONSCALE__CTOR_OFFSET))(this);
		}
	};
}
