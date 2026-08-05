#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_BEZIERSURFACECAMERACONFIGINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x14858320)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BezierSurfaceCameraConfigInput_TypeDefinitionIndex = 80955;

	class BezierSurfaceCameraConfigInput : public ::System::Object
	{
	public:
		::System::Single DragScreenRotateSensitivity; // 0x10
		::System::Single MouseScrollFOVSensitivity; // 0x14
		::System::Single Scale_U; // 0x18
		::System::Single Scale_V; // 0x1C
		::System::Single Fov_Change_Per; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BEZIERSURFACECAMERACONFIGINPUT__CTOR_OFFSET))(this);
		}
	};
}
