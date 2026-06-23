#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralLoginTipsContextV2; }
namespace MoleMole { class UIGeneralLoginTipsDialogPopWindowController; }

#define MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17653A60)
#define MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONSHOWLOGINTIPS_B__1_OFFSET UNITYSDK_OFFSET(0x17653A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLoginTipsDialogPopWindowController___c__DisplayClass16_0_TypeDefinitionIndex = 78235;

	class UIGeneralLoginTipsDialogPopWindowController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralLoginTipsContextV2* context; // 0x10
		::MoleMole::UIGeneralLoginTipsDialogPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShowLoginTips_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONSHOWLOGINTIPS_B__1_OFFSET))(this);
		}
	};
}
