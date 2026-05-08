#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9A6C0545772F4974.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/DurationButtonType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_DURATIONBUTTONINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x11040FB0)
#define MOLEMOLE_DURATIONBUTTONINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11040FC0)

namespace MoleMole
{
	inline static constexpr unsigned int DurationButtonInputActionEventConfig_TypeDefinitionIndex = 39627;

	class DurationButtonInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::MoleMole::DurationButtonType durationType; // 0x18
		::MoleMole::LogicButtonInputType logicButtonInputType; // 0x1C
		::System::Single durationThreshold; // 0x20
		::System::Boolean IgnoreCursorHide; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DURATIONBUTTONINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_9A6C0545772F4974 get_dataType()
		{
			return ((::Enum_3_9A6C0545772F4974(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DURATIONBUTTONINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
