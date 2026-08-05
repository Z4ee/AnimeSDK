#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F71F7FB55BBEB1D9;
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }

#define CLASS_1_06E3EA105E1F8287_CLASS_1_18A56AA89564F483_METHOD_1_76109544D8A1B4D0_OFFSET UNITYSDK_OFFSET(0x12C92BE0)
#define CLASS_1_06E3EA105E1F8287_CLASS_1_18A56AA89564F483__CTOR_OFFSET UNITYSDK_OFFSET(0x12C92BD0)

inline static constexpr unsigned int Class_1_06E3EA105E1F8287_Class_1_18A56AA89564F483_TypeDefinitionIndex = 73517;

class Class_1_06E3EA105E1F8287_Class_1_18A56AA89564F483 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::Action* Field_1_1; // 0x18
	::Class_1_F71F7FB55BBEB1D9* Field_1_5; // 0x20
	::MoleMole::UIWindowController* Field_1_0; // 0x28
	::System::Int32 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E3EA105E1F8287_CLASS_1_18A56AA89564F483__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_76109544D8A1B4D0(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_06E3EA105E1F8287_CLASS_1_18A56AA89564F483_METHOD_1_76109544D8A1B4D0_OFFSET))(this, a1);
	}
};
