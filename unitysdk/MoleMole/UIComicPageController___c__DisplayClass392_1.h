#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageController___c__DisplayClass392_0; }
namespace MoleMole::Comic { class MonoComicDecorateEventBase; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS392_1__CTOR_OFFSET UNITYSDK_OFFSET(0x187D35C0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS392_1__HIDEEVENT_B__1_OFFSET UNITYSDK_OFFSET(0x187D35D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass392_1_TypeDefinitionIndex = 46633;

	class UIComicPageController___c__DisplayClass392_1 : public ::System::Object
	{
	public:
		::MoleMole::Comic::MonoComicDecorateEventBase* decoEvent; // 0x10
		::MoleMole::UIComicPageController___c__DisplayClass392_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS392_1__CTOR_OFFSET))(this);
		}

		::System::Void _HideEvent_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS392_1__HIDEEVENT_B__1_OFFSET))(this);
		}
	};
}
