#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController_LogicDelegate.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define CLASS_2_50A54FE211D87093_METHOD_2_14CF2C90BD62CBE7_OFFSET UNITYSDK_OFFSET(0x13DBF1F0)
#define CLASS_2_50A54FE211D87093_METHOD_2_DDBF46B652AA6E24_OFFSET UNITYSDK_OFFSET(0x13DBF200)
#define CLASS_2_50A54FE211D87093_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13DBE3A0)
#define CLASS_2_50A54FE211D87093_REFRESHPAGE_OFFSET UNITYSDK_OFFSET(0x13DBE6C0)
#define CLASS_2_50A54FE211D87093__CTOR_OFFSET UNITYSDK_OFFSET(0x13DBF1E0)

inline static constexpr unsigned int Class_2_50A54FE211D87093_TypeDefinitionIndex = 40837;

class Class_2_50A54FE211D87093 : public ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate
{
public:
	::System::String* Field_2_1; // 0x68
	::System::Int32 Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50A54FE211D87093__CTOR_OFFSET))(this);
	}

	::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_50A54FE211D87093_ONUIOPEN_OFFSET))(this, a1);
	}

	::System::Void RefreshPage(::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason))((::PBYTE)hIl2Cpp + CLASS_2_50A54FE211D87093_REFRESHPAGE_OFFSET))(this, a1);
	}

	::System::Void Method_2_14CF2C90BD62CBE7(::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason))((::PBYTE)hIl2Cpp + CLASS_2_50A54FE211D87093_METHOD_2_14CF2C90BD62CBE7_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDBF46B652AA6E24(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_50A54FE211D87093_METHOD_2_DDBF46B652AA6E24_OFFSET))(this, a1);
	}
};
