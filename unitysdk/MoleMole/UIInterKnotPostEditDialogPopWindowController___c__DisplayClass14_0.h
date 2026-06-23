#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1056;
namespace MoleMole { class NotificationBadgeEx; }

#define MOLEMOLE_UIINTERKNOTPOSTEDITDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18292910)
#define MOLEMOLE_UIINTERKNOTPOSTEDITDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHTAB_B__0_OFFSET UNITYSDK_OFFSET(0x18292920)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostEditDialogPopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 44103;

	class UIInterKnotPostEditDialogPopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_1056* item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTEDITDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshTab_b__0(::MoleMole::NotificationBadgeEx* badge)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTEDITDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHTAB_B__0_OFFSET))(this, badge);
		}
	};
}
