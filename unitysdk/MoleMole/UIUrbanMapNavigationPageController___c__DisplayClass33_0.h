#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapNavigationPageController; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11331F20)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_0__ONSKIPFADEINANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x11331F30)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_0__ONSKIPFADEINANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x11334AE0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_0__ONSKIPFADEINANIMATION_G__TRYSTARTNAVIGATIONPAGEFADEIN_2_OFFSET UNITYSDK_OFFSET(0x11331F40)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationPageController___c__DisplayClass33_0_TypeDefinitionIndex = 81598;

	class UIUrbanMapNavigationPageController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::MoleMole::UIUrbanMapNavigationPageController* __4__this; // 0x10
		::System::Boolean areaDataReady; // 0x18
		::System::Boolean portalDataReady; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSkipFadeInAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_0__ONSKIPFADEINANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _OnSkipFadeInAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_0__ONSKIPFADEINANIMATION_B__1_OFFSET))(this);
		}

		::System::Void _OnSkipFadeInAnimation_g__TryStartNavigationPageFadeIn_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_0__ONSKIPFADEINANIMATION_G__TRYSTARTNAVIGATIONPAGEFADEIN_2_OFFSET))(this);
		}
	};
}
