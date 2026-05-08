#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define CLASS_2_1DEA7AD9123A324A_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17596690)

inline static constexpr unsigned int Class_2_1DEA7AD9123A324A_PanelData_TypeDefinitionIndex = 45626;

class Class_2_1DEA7AD9123A324A_PanelData : public ::MoleMole::UIControllerContextBase
{
public:
	::System::Int32 SelectId; // 0x28
	::System::Int32 NodeId; // 0x2C
	::System::Boolean IsSelectBuddy; // 0x30
	::System::Boolean IsOnlyOne; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_PANELDATA__CTOR_OFFSET))(this);
	}
};
