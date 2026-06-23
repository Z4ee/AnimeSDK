#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace MoleMole { class UIHollowCardOptionsDialogV2PopWindowController; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16906070)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONUIOPEN_B__6_OFFSET UNITYSDK_OFFSET(0x16906080)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsDialogV2PopWindowController___c__DisplayClass16_0_TypeDefinitionIndex = 79815;

	class UIHollowCardOptionsDialogV2PopWindowController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowCardOptionItemWidgetController* ctrl; // 0x10
		::MoleMole::UIHollowCardOptionsDialogV2PopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONUIOPEN_B__6_OFFSET))(this);
		}
	};
}
