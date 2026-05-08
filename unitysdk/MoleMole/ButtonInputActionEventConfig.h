#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9A6C0545772F4974.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_BUTTONINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x12CFF4B0)
#define MOLEMOLE_BUTTONINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12CFF4C0)

namespace MoleMole
{
	inline static constexpr unsigned int ButtonInputActionEventConfig_TypeDefinitionIndex = 74709;

	class ButtonInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::System::Boolean handleAllPressTypes; // 0x18
		::System::Boolean IgnoreCursorHide; // 0x19
		::MoleMole::ButtonPressType pressType; // 0x1C
		::MoleMole::LogicButtonInputType logicButtonInputType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUTTONINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_9A6C0545772F4974 get_dataType()
		{
			return ((::Enum_3_9A6C0545772F4974(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUTTONINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
