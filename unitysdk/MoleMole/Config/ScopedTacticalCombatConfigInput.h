#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_SCOPEDTACTICALCOMBATCONFIGINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x159FE720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScopedTacticalCombatConfigInput_TypeDefinitionIndex = 70368;

	class ScopedTacticalCombatConfigInput : public ::System::Object
	{
	public:
		::System::Single DragScreenRotateSensitivity; // 0x10
		::System::Single MouseScrollFOVSensitivity; // 0x14
		::System::Single Fov_Change_Per; // 0x18
		::System::Single ScreenOffsetSensitivityX; // 0x1C
		::System::Single ScreenOffsetSensitivityY; // 0x20
		::System::Single RollAngleSensitivity; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCOPEDTACTICALCOMBATCONFIGINPUT__CTOR_OFFSET))(this);
		}
	};
}
