#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0DF1D818AC0BE25A.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBallGameUpgradeRowWidgetController; }

#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_SUMMARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D78DD70)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameUpgradeDialogPopWindowController_Summary_TypeDefinitionIndex = 89531;

	class UIBallGameUpgradeDialogPopWindowController_Summary : public ::System::Object
	{
	public:
		::Struct_2_0DF1D818AC0BE25A summary; // 0x10
		::MoleMole::UIBallGameUpgradeRowWidgetController* widget; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_SUMMARY__CTOR_OFFSET))(this);
		}
	};
}
