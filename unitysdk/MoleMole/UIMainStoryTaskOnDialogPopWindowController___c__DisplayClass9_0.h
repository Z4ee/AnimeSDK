#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINSTORYTASKONDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183AF770)
#define MOLEMOLE_UIMAINSTORYTASKONDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__PLAYCLOSE_B__0_OFFSET UNITYSDK_OFFSET(0x183AF780)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryTaskOnDialogPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 78300;

	class UIMainStoryTaskOnDialogPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYTASKONDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayClose_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYTASKONDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__PLAYCLOSE_B__0_OFFSET))(this);
		}
	};
}
