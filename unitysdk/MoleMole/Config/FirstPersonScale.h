#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_FIRSTPERSONSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BC2A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FirstPersonScale_TypeDefinitionIndex = 67438;

	class FirstPersonScale : public ::System::Object
	{
	public:
		::System::Single DragScreenRotateSensitivity; // 0x10
		::System::Single TwoPointDragScreenZoomSensitivity; // 0x14
		::System::Single MouseScrollFOVSensitivity; // 0x18
		::System::Single Fov_Change_Per; // 0x1C
		::System::Single Pitch; // 0x20
		::System::Single Yaw; // 0x24
		::System::Single MoveX; // 0x28
		::System::Single MoveY; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FIRSTPERSONSCALE__CTOR_OFFSET))(this);
		}
	};
}
