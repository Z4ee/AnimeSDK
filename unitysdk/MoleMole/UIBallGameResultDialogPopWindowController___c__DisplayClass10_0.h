#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DA27CC825196E91F.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBallGameMainPageController; }
namespace MoleMole { class UIBallGameResultDialogPopWindowController; }

#define MOLEMOLE_UIBALLGAMERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F202270)
#define MOLEMOLE_UIBALLGAMERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__RESULTDIALOGSETTLEBALLGAME_B__0_OFFSET UNITYSDK_OFFSET(0x1F202280)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameResultDialogPopWindowController___c__DisplayClass10_0_TypeDefinitionIndex = 93268;

	class UIBallGameResultDialogPopWindowController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBallGameMainPageController* page; // 0x10
		::MoleMole::UIBallGameResultDialogPopWindowController* __4__this; // 0x18
		::Enum_3_DA27CC825196E91F result; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _ResultDialogSettleBallgame_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__RESULTDIALOGSETTLEBALLGAME_B__0_OFFSET))(this);
		}
	};
}
