#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookChangeWishlistTargetPopWindowController; }
namespace MoleMole { class UITransitionPanelPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15258D80)
#define MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__ONCLICKGOTOBTN_B__0_OFFSET UNITYSDK_OFFSET(0x15258D90)
#define MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__ONCLICKGOTOBTN_B__1_OFFSET UNITYSDK_OFFSET(0x15258F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookChangeWishlistTargetPopWindowController___c__DisplayClass15_0_TypeDefinitionIndex = 47182;

	class UIHandBookChangeWishlistTargetPopWindowController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHandBookChangeWishlistTargetPopWindowController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::MoleMole::UITransitionPanelPopWindowController* uiTransitionPanelController; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickGotoBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__ONCLICKGOTOBTN_B__0_OFFSET))(this);
		}

		::System::Void _OnClickGotoBtn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__ONCLICKGOTOBTN_B__1_OFFSET))(this);
		}
	};
}
