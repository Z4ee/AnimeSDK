#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9A6C0545772F4974.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_BUTTONINTERVALPRESSINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1742B280)
#define MOLEMOLE_BUTTONINTERVALPRESSINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1742B290)

namespace MoleMole
{
	inline static constexpr unsigned int ButtonIntervalPressInputActionEventConfig_TypeDefinitionIndex = 65703;

	class ButtonIntervalPressInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::System::Single triggerInterval; // 0x18
		::System::Single FirstTriggerInterval; // 0x1C
		::System::Boolean IgnoreCursorHide; // 0x20
		::MoleMole::LogicButtonInputType logicButtonInputType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUTTONINTERVALPRESSINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_9A6C0545772F4974 get_dataType()
		{
			return ((::Enum_3_9A6C0545772F4974(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUTTONINTERVALPRESSINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
