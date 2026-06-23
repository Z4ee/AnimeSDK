#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5EA2B17DF83E32C8_3.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaRewardListDialogPopWindowController; }

#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A677E0)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_0__ONITEMCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x15A677F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRewardListDialogPopWindowController___c__DisplayClass31_0_TypeDefinitionIndex = 64280;

	class UIGachaRewardListDialogPopWindowController___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaRewardListDialogPopWindowController* __4__this; // 0x10
		::System::Int32 itemID; // 0x18
		::Enum_3_5EA2B17DF83E32C8_3 type; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnItemClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_0__ONITEMCLICK_B__0_OFFSET))(this);
		}
	};
}
