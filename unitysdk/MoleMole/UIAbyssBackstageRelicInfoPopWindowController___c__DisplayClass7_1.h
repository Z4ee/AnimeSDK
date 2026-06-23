#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssBackstageRelicInfoPopWindowController; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13F38280)
#define MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_1__INITTAB_B__1_OFFSET UNITYSDK_OFFSET(0x13F38290)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssBackstageRelicInfoPopWindowController___c__DisplayClass7_1_TypeDefinitionIndex = 49662;

	class UIAbyssBackstageRelicInfoPopWindowController___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssBackstageRelicInfoPopWindowController* __4__this; // 0x10
		::UnityEngine::UI::Extension::UITabButton* tab; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Void _InitTab_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSBACKSTAGERELICINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS7_1__INITTAB_B__1_OFFSET))(this);
		}
	};
}
