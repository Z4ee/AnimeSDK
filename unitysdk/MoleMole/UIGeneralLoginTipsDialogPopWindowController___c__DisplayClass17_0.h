#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralLoginTipsContextV2; }
namespace MoleMole { class UIGeneralTipsWidgetController; }

#define MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185A4120)
#define MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__SHOWTIPS_B__0_OFFSET UNITYSDK_OFFSET(0x185A4130)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLoginTipsDialogPopWindowController___c__DisplayClass17_0_TypeDefinitionIndex = 56840;

	class UIGeneralLoginTipsDialogPopWindowController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralLoginTipsContextV2* context; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ShowTips_b__0(::MoleMole::UIGeneralTipsWidgetController* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralTipsWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__SHOWTIPS_B__0_OFFSET))(this, match);
		}
	};
}
