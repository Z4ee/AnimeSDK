#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIExpeditionBuddySelectPopWindowController; }

#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF0C20)
#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__ONUIINIT_B__4_OFFSET UNITYSDK_OFFSET(0x16EF0C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIExpeditionBuddySelectPopWindowController___c__DisplayClass23_0_TypeDefinitionIndex = 42205;

	class UIExpeditionBuddySelectPopWindowController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UIExpeditionBuddySelectPopWindowController* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__ONUIINIT_B__4_OFFSET))(this);
		}
	};
}
