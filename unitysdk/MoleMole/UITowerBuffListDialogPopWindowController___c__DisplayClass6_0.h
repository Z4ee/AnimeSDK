#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBuffListItemRowWidgetController_BuffListItemData; }

#define MOLEMOLE_UITOWERBUFFLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CREATEITEM_B__0_OFFSET UNITYSDK_OFFSET(0x11A00300)
#define MOLEMOLE_UITOWERBUFFLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A002F0)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerBuffListDialogPopWindowController___c__DisplayClass6_0_TypeDefinitionIndex = 78952;

	class UITowerBuffListDialogPopWindowController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBuffListItemRowWidgetController_BuffListItemData* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERBUFFLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateItem_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERBUFFLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CREATEITEM_B__0_OFFSET))(this);
		}
	};
}
