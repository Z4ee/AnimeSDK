#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBuffListItemRowWidgetController_BuffListItemData; }
namespace MoleMole { class UIMonsterFantasyBuffListDialogPopWindowController; }

#define MOLEMOLE_UIMONSTERFANTASYBUFFLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CREATEITEM_B__0_OFFSET UNITYSDK_OFFSET(0x15166510)
#define MOLEMOLE_UIMONSTERFANTASYBUFFLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15166500)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBuffListDialogPopWindowController___c__DisplayClass17_0_TypeDefinitionIndex = 70293;

	class UIMonsterFantasyBuffListDialogPopWindowController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMonsterFantasyBuffListDialogPopWindowController* __4__this; // 0x10
		::MoleMole::UIBuffListItemRowWidgetController_BuffListItemData* data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBUFFLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateItem_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBUFFLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CREATEITEM_B__0_OFFSET))(this);
		}
	};
}
