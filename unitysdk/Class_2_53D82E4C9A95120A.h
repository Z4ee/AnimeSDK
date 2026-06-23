#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController_LogicDelegate.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define CLASS_2_53D82E4C9A95120A_METHOD_2_711F9084EFE049AA_OFFSET UNITYSDK_OFFSET(0x142FC640)
#define CLASS_2_53D82E4C9A95120A_METHOD_2_F3BD89A35D800DE9_OFFSET UNITYSDK_OFFSET(0x142FC650)
#define CLASS_2_53D82E4C9A95120A_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x142FB790)
#define CLASS_2_53D82E4C9A95120A_REFRESHPAGE_OFFSET UNITYSDK_OFFSET(0x142FBAB0)
#define CLASS_2_53D82E4C9A95120A__CTOR_OFFSET UNITYSDK_OFFSET(0x142FC630)

inline static constexpr unsigned int Class_2_53D82E4C9A95120A_TypeDefinitionIndex = 59497;

class Class_2_53D82E4C9A95120A : public ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate
{
public:
	::System::String* Field_2_1; // 0x70
	::System::Int32 Field_2_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53D82E4C9A95120A__CTOR_OFFSET))(this);
	}

	::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_53D82E4C9A95120A_ONUIOPEN_OFFSET))(this, a1);
	}

	::System::Void RefreshPage(::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason))((::PBYTE)hIl2Cpp + CLASS_2_53D82E4C9A95120A_REFRESHPAGE_OFFSET))(this, a1);
	}

	::System::Void Method_2_711F9084EFE049AA(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_53D82E4C9A95120A_METHOD_2_711F9084EFE049AA_OFFSET))(this, a1);
	}

	::System::Void Method_2_F3BD89A35D800DE9(::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason))((::PBYTE)hIl2Cpp + CLASS_2_53D82E4C9A95120A_METHOD_2_F3BD89A35D800DE9_OFFSET))(this, a1);
	}
};
