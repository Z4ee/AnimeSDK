#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageController; }
namespace MoleMole::Comic { class MonoComicBubble; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS347_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA1990)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS347_0__SHOWBUBBLE_B__0_OFFSET UNITYSDK_OFFSET(0x16CA19A0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS347_0__SHOWBUBBLE_B__1_OFFSET UNITYSDK_OFFSET(0x16CA19E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS347_0__SHOWBUBBLE_B__2_OFFSET UNITYSDK_OFFSET(0x16CA1A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass347_0_TypeDefinitionIndex = 40020;

	class UIComicPageController___c__DisplayClass347_0 : public ::System::Object
	{
	public:
		::MoleMole::Comic::MonoComicBubble* bubble; // 0x10
		::MoleMole::UIComicPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS347_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowBubble_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS347_0__SHOWBUBBLE_B__0_OFFSET))(this);
		}

		::System::Void _ShowBubble_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS347_0__SHOWBUBBLE_B__1_OFFSET))(this);
		}

		::System::Void _ShowBubble_b__2(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS347_0__SHOWBUBBLE_B__2_OFFSET))(this, id);
		}
	};
}
