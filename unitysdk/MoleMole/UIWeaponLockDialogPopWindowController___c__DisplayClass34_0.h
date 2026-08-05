#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F7CAAD54879BD084;

#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11E31C90)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__ISWEAPONLOCKED_B__0_OFFSET UNITYSDK_OFFSET(0x11E31CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWeaponLockDialogPopWindowController___c__DisplayClass34_0_TypeDefinitionIndex = 81971;

	class UIWeaponLockDialogPopWindowController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsWeaponLocked_b__0(::Class_2_F7CAAD54879BD084* w)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_F7CAAD54879BD084*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__ISWEAPONLOCKED_B__0_OFFSET))(this, w);
		}
	};
}
