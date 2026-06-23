#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityFriendInviteDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYFRIENDINVITEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x178A20A0)
#define MOLEMOLE_UIMAINCITYFRIENDINVITEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONITEMCLICKCONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0x178A20B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityFriendInviteDialogPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 59700;

	class UIMainCityFriendInviteDialogPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* confirmAction; // 0x10
		::MoleMole::UIMainCityFriendInviteDialogPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYFRIENDINVITEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnItemClickConfirm_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYFRIENDINVITEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONITEMCLICKCONFIRM_B__0_OFFSET))(this);
		}
	};
}
