#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/VirtualJoystickMoveType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGVIRTUALJOYSTICKPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE97B3C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigVirtualJoystickParam_TypeDefinitionIndex = 52678;

	class ConfigVirtualJoystickParam : public ::System::Object
	{
	public:
		::MoleMole::VirtualJoystickMoveType MoveType; // 0x10
		::System::Single DirSharedAngle; // 0x14
		::System::Single LeftRightAngle; // 0x18
		::System::Single CenterMoveAreaSize; // 0x1C
		::System::Single DeadZonePercent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIRTUALJOYSTICKPARAM__CTOR_OFFSET))(this);
		}
	};
}
