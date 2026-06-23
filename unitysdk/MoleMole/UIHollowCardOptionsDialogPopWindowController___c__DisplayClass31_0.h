#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18250500)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_0__PLAYREFRESHANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x18250510)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsDialogPopWindowController___c__DisplayClass31_0_TypeDefinitionIndex = 72880;

	class UIHollowCardOptionsDialogPopWindowController___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRefreshAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_0__PLAYREFRESHANIMATION_B__0_OFFSET))(this);
		}
	};
}
