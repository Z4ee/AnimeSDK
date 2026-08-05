#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/VirtualJoystickMoveType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGVIRTUALJOYSTICKPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACAED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigVirtualJoystickParam_TypeDefinitionIndex = 91425;

	class ConfigVirtualJoystickParam : public ::System::Object
	{
	public:
		::System::Single CenterMoveAreaSize; // 0x10
		::System::Single DeadZonePercent; // 0x14
		::System::Single DirSharedAngle; // 0x18
		::System::Single LeftRightAngle; // 0x1C
		::MoleMole::VirtualJoystickMoveType MoveType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIRTUALJOYSTICKPARAM__CTOR_OFFSET))(this);
		}
	};
}
