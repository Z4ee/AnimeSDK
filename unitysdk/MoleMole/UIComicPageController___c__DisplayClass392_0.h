#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageController; }
namespace MoleMole::Comic { class MonoComicBubble; }
namespace MoleMole::Comic { class MonoComicEventBase; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS392_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18544E30)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS392_0__HIDEEVENT_B__0_OFFSET UNITYSDK_OFFSET(0x18544E40)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass392_0_TypeDefinitionIndex = 87105;

	class UIComicPageController___c__DisplayClass392_0 : public ::System::Object
	{
	public:
		::MoleMole::Comic::MonoComicBubble* bubbleEvent; // 0x10
		::MoleMole::Comic::MonoComicEventBase* curEvent; // 0x18
		::MoleMole::UIComicPageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS392_0__CTOR_OFFSET))(this);
		}

		::System::Void _HideEvent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS392_0__HIDEEVENT_B__0_OFFSET))(this);
		}
	};
}
