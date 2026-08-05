#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMailDialogPopWindowController; }

#define MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184BF900)
#define MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONSCROLLMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x184BF910)

namespace MoleMole
{
	inline static constexpr unsigned int UIMailDialogPopWindowController___c__DisplayClass16_0_TypeDefinitionIndex = 55618;

	class UIMailDialogPopWindowController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMailDialogPopWindowController* __4__this; // 0x10
		::System::Int32 selectIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollMove_b__0(::System::Int32 deltaCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONSCROLLMOVE_B__0_OFFSET))(this, deltaCount);
		}
	};
}
