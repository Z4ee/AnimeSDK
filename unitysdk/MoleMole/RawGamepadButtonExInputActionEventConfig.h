#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9A6C0545772F4974.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/MoleMole/GamepadButtonEx.h"

#define MOLEMOLE_RAWGAMEPADBUTTONEXINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x191B27D0)
#define MOLEMOLE_RAWGAMEPADBUTTONEXINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x191B27E0)

namespace MoleMole
{
	inline static constexpr unsigned int RawGamepadButtonExInputActionEventConfig_TypeDefinitionIndex = 50066;

	class RawGamepadButtonExInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::MoleMole::GamepadButtonEx gamepadButtonExType; // 0x18
		::System::Boolean handleAllPressTypes; // 0x1C
		::MoleMole::ButtonPressType pressType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RAWGAMEPADBUTTONEXINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_9A6C0545772F4974 get_dataType()
		{
			return ((::Enum_3_9A6C0545772F4974(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RAWGAMEPADBUTTONEXINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
