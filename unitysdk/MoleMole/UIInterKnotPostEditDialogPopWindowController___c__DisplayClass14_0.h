#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_84;
namespace MoleMole { class NotificationBadgeEx; }

#define MOLEMOLE_UIINTERKNOTPOSTEDITDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1830F2E0)
#define MOLEMOLE_UIINTERKNOTPOSTEDITDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHTAB_B__0_OFFSET UNITYSDK_OFFSET(0x1830F2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostEditDialogPopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 77906;

	class UIInterKnotPostEditDialogPopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_84* item; // 0x10

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
