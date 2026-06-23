#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9A6C0545772F4974.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/LogicAxis2DInputType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_TWOAXISACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x13F36B10)
#define MOLEMOLE_TWOAXISACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13F36B20)

namespace MoleMole
{
	inline static constexpr unsigned int TwoAxisActionEventConfig_TypeDefinitionIndex = 42249;

	class TwoAxisActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::Il2CppArray<::MoleMole::LogicButtonInputType>* extraDownLogicButtonInputTypes; // 0x18
		::Il2CppArray<::MoleMole::LogicButtonInputType>* extraUpLogicButtonInputTypes; // 0x20
		::Il2CppArray<::MoleMole::LogicButtonInputType>* extraLeftLogicButtonInputTypes; // 0x28
		::Il2CppArray<::MoleMole::LogicAxis2DInputType>* logicAxis2DInputTypes; // 0x30
		::Il2CppArray<::MoleMole::LogicButtonInputType>* extraRightLogicButtonInputTypes; // 0x38
		::MoleMole::LogicButtonInputType rightLogicButtonInputType; // 0x40
		::MoleMole::LogicButtonInputType upLogicButtonInputType; // 0x44
		::MoleMole::LogicButtonInputType leftLogicButtonInputType; // 0x48
		::MoleMole::LogicButtonInputType downLogicButtonInputType; // 0x4C
		::System::Boolean IgnoreCursorHide; // 0x50
		::System::Boolean addButtonInputs; // 0x51

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWOAXISACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_9A6C0545772F4974 get_dataType()
		{
			return ((::Enum_3_9A6C0545772F4974(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWOAXISACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
