#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_E4EEC1864B2CE580;
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoDigitConfig; }

#define MOLEMOLE_UIGRANDMARCELSETTLEMENTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF1690)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelSettlementDialogPopWindowController_Context_TypeDefinitionIndex = 43747;

	class UIGrandMarcelSettlementDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::MiniGame::BangbooPartyGame::MonoDigitConfig* MonoDigit; // 0x28
		::Class_3_E4EEC1864B2CE580* Notify; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELSETTLEMENTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
