#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowResultInfoRowNewWidgetController; }

#define MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C96370)
#define MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0___REFRESHBATTLERANKING_MSG_B__0_OFFSET UNITYSDK_OFFSET(0x19C96380)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelGeneralWinResultDialogPopWindowController___c__DisplayClass62_0_TypeDefinitionIndex = 60683;

	class UILevelGeneralWinResultDialogPopWindowController___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowResultInfoRowNewWidgetController* rankItem; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshBattleRanking_Msg_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0___REFRESHBATTLERANKING_MSG_B__0_OFFSET))(this);
		}
	};
}
