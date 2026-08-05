#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_896CF41A82B374FA_1;
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoDigitConfig; }

#define MOLEMOLE_UIGRANDMARCELSETTLEMENTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCDFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelSettlementDialogPopWindowController_Context_TypeDefinitionIndex = 66351;

	class UIGrandMarcelSettlementDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::MiniGame::BangbooPartyGame::MonoDigitConfig* MonoDigit; // 0x28
		::Class_3_896CF41A82B374FA_1* Notify; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSETTLEMENTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
