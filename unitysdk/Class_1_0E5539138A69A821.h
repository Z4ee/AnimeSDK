#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8AC9F117F5B927F1;
namespace MoleMole { class UIBallGameBoxDialogPopWindowController; }

#define CLASS_1_0E5539138A69A821_METHOD_1_6A1173E5FC92F137_OFFSET UNITYSDK_OFFSET(0x127826F0)
#define CLASS_1_0E5539138A69A821_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x127826A0)
#define CLASS_1_0E5539138A69A821_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12782660)
#define CLASS_1_0E5539138A69A821__CTOR_OFFSET UNITYSDK_OFFSET(0x127826E0)

inline static constexpr unsigned int Class_1_0E5539138A69A821_TypeDefinitionIndex = 58579;

class Class_1_0E5539138A69A821 : public ::System::Object
{
public:
	::Class_2_8AC9F117F5B927F1* Field_1_1; // 0x10
	::MoleMole::UIBallGameBoxDialogPopWindowController* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E5539138A69A821__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E5539138A69A821_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E5539138A69A821_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_6A1173E5FC92F137(::MoleMole::UIBallGameBoxDialogPopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBallGameBoxDialogPopWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_0E5539138A69A821_METHOD_1_6A1173E5FC92F137_OFFSET))(this, a1);
	}
};
