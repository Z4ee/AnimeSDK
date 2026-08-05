#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C36E26A2EF8B3249;
namespace MoleMole { class UIQuickEditPopWindowController; }

#define CLASS_1_6159B0A974ACF7A1_METHOD_1_7C8FA48C29F87C20_OFFSET UNITYSDK_OFFSET(0x185D3B90)
#define CLASS_1_6159B0A974ACF7A1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x185D3B40)
#define CLASS_1_6159B0A974ACF7A1__CTOR_OFFSET UNITYSDK_OFFSET(0x185D3B80)

inline static constexpr unsigned int Class_1_6159B0A974ACF7A1_TypeDefinitionIndex = 88024;

class Class_1_6159B0A974ACF7A1 : public ::System::Object
{
public:
	::MoleMole::UIQuickEditPopWindowController* Field_1_1; // 0x10
	::Class_2_C36E26A2EF8B3249* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6159B0A974ACF7A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6159B0A974ACF7A1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7C8FA48C29F87C20(::MoleMole::UIQuickEditPopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIQuickEditPopWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_6159B0A974ACF7A1_METHOD_1_7C8FA48C29F87C20_OFFSET))(this, a1);
	}
};
