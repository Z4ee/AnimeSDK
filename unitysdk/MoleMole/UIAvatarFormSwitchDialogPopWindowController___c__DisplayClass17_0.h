#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAvatarFormSwitchDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18509B70)
#define MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__ONCLICKSWITCH_B__0_OFFSET UNITYSDK_OFFSET(0x18509B80)
#define MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__ONCLICKSWITCH_B__1_OFFSET UNITYSDK_OFFSET(0x18509CD0)
#define MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__ONCLICKSWITCH_B__2_OFFSET UNITYSDK_OFFSET(0x18509E60)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarFormSwitchDialogPopWindowController___c__DisplayClass17_0_TypeDefinitionIndex = 42527;

	class UIAvatarFormSwitchDialogPopWindowController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::System::Action* __9__1; // 0x18
		::MoleMole::UIAvatarFormSwitchDialogPopWindowController* __4__this; // 0x20
		::System::Int32 avatarID; // 0x28
		::System::Int32 controlAvatar; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSwitch_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__ONCLICKSWITCH_B__0_OFFSET))(this);
		}

		::System::Void _OnClickSwitch_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__ONCLICKSWITCH_B__1_OFFSET))(this);
		}

		::System::Void _OnClickSwitch_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__ONCLICKSWITCH_B__2_OFFSET))(this);
		}
	};
}
