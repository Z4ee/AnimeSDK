#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovTrashcandaPopWindowController; }

#define MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__ANIMATEPROGRESSTO_B__0_OFFSET UNITYSDK_OFFSET(0x12B23100)
#define MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__ANIMATEPROGRESSTO_B__1_OFFSET UNITYSDK_OFFSET(0x12B23190)
#define MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B230F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTrashcandaPopWindowController___c__DisplayClass28_0_TypeDefinitionIndex = 54779;

	class UIZenkovTrashcandaPopWindowController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovTrashcandaPopWindowController* __4__this; // 0x10
		::System::Single timer; // 0x18
		::System::Single toProgress; // 0x1C
		::System::Single fromProgress; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _AnimateProgressTo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__ANIMATEPROGRESSTO_B__0_OFFSET))(this);
		}

		::System::Void _AnimateProgressTo_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTRASHCANDAPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__ANIMATEPROGRESSTO_B__1_OFFSET))(this);
		}
	};
}
