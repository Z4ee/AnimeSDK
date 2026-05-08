#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBuffListItemRowWidgetController_BuffListItemData; }

#define MOLEMOLE_UITOWERBUFFLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CREATEITEM_B__0_OFFSET UNITYSDK_OFFSET(0xF627140)
#define MOLEMOLE_UITOWERBUFFLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF627130)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerBuffListDialogPopWindowController___c__DisplayClass6_0_TypeDefinitionIndex = 58235;

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
