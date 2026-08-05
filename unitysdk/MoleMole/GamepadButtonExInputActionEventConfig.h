#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9A6C0545772F4974.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/GamepadButtonEx.h"

#define MOLEMOLE_GAMEPADBUTTONEXINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x13A92190)
#define MOLEMOLE_GAMEPADBUTTONEXINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13A921A0)

namespace MoleMole
{
	inline static constexpr unsigned int GamepadButtonExInputActionEventConfig_TypeDefinitionIndex = 66471;

	class GamepadButtonExInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::System::Single triggerInterval; // 0x18
		::System::Single FirstTriggerInterval; // 0x1C
		::MoleMole::GamepadButtonEx gamepadButtonExType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADBUTTONEXINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_9A6C0545772F4974 get_dataType()
		{
			return ((::Enum_3_9A6C0545772F4974(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADBUTTONEXINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
