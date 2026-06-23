#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define CLASS_2_1DEA7AD9123A324A_1_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13537710)

inline static constexpr unsigned int Class_2_1DEA7AD9123A324A_1_PanelData_TypeDefinitionIndex = 46773;

class Class_2_1DEA7AD9123A324A_1_PanelData : public ::MoleMole::UIControllerContextBase
{
public:
	::System::Int32 NodeId; // 0x28
	::System::Boolean IsSelectBuddy; // 0x2C
	::System::Boolean IsOnlyOne; // 0x2D
	::System::Int32 SelectId; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_PANELDATA__CTOR_OFFSET))(this);
	}
};
