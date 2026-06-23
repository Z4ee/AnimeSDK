#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9A6C0545772F4974.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_MOUSEBUTTONCLICKINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x12BD7490)
#define MOLEMOLE_MOUSEBUTTONCLICKINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD74A0)

namespace MoleMole
{
	inline static constexpr unsigned int MouseButtonClickInputActionEventConfig_TypeDefinitionIndex = 65996;

	class MouseButtonClickInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::System::Single moveDistanceThreshold; // 0x18
		::System::Single clickTimeThreshold; // 0x1C
		::MoleMole::LogicButtonInputType logicButtonInputType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOUSEBUTTONCLICKINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_9A6C0545772F4974 get_dataType()
		{
			return ((::Enum_3_9A6C0545772F4974(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOUSEBUTTONCLICKINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
