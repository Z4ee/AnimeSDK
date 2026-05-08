#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define CLASS_2_9CB9A850F023C008_1_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13525EC0)

inline static constexpr unsigned int Class_2_9CB9A850F023C008_1_PanelData_TypeDefinitionIndex = 63980;

class Class_2_9CB9A850F023C008_1_PanelData : public ::MoleMole::UIControllerContextBase
{
public:
	::System::Boolean IsOnlyOne; // 0x28
	::System::Boolean IsSelectBuddy; // 0x29
	::System::Int32 SelectId; // 0x2C
	::System::Int32 NodeId; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_PANELDATA__CTOR_OFFSET))(this);
	}
};
