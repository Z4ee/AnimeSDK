#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3002D7CF5FEE9D3A;
class Class_3_5F8DAA47ACDB7251;
namespace MoleMole { class UIInLevelPauseDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FDDF80)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS76_0__SHOWQUITBATTLEDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x18FDDF90)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c__DisplayClass76_0_TypeDefinitionIndex = 59721;

	class UIInLevelPauseDialogPopWindowController___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelPauseDialogPopWindowController* __4__this; // 0x10
		::System::Action* onConfirm; // 0x18
		::Class_3_5F8DAA47ACDB7251* context; // 0x20
		::Class_1_3002D7CF5FEE9D3A* rawContext; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowQuitBattleDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS76_0__SHOWQUITBATTLEDIALOG_B__0_OFFSET))(this);
		}
	};
}
