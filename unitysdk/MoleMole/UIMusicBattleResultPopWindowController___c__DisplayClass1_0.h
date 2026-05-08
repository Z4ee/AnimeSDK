#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowHollowLayerResultDialogContext; }
namespace MoleMole { class UIMusicBattleResultPopWindowController; }

#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1610DD50)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS1_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x1610DD60)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS1_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x1610DF20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleResultPopWindowController___c__DisplayClass1_0_TypeDefinitionIndex = 49953;

	class UIMusicBattleResultPopWindowController___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMusicBattleResultPopWindowController* __4__this; // 0x10
		::MoleMole::UIHollowHollowLayerResultDialogContext* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS1_0__ONUIOPEN_B__0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS1_0__ONUIOPEN_B__1_OFFSET))(this);
		}
	};
}
