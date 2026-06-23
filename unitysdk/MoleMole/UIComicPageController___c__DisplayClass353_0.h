#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageController; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS353_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C1A8E0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS353_0__SETUPBUBBLEAUDIOS_B__0_OFFSET UNITYSDK_OFFSET(0x14C1A8F0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS353_0__SETUPBUBBLEAUDIOS_B__1_OFFSET UNITYSDK_OFFSET(0x14C1A920)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass353_0_TypeDefinitionIndex = 46624;

	class UIComicPageController___c__DisplayClass353_0 : public ::System::Object
	{
	public:
		::MoleMole::UIComicPageController* __4__this; // 0x10
		::System::UInt32 pendingId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS353_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupBubbleAudios_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS353_0__SETUPBUBBLEAUDIOS_B__0_OFFSET))(this);
		}

		::System::Void _SetupBubbleAudios_b__1(::System::UInt32 id, ::System::UInt32 __)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS353_0__SETUPBUBBLEAUDIOS_B__1_OFFSET))(this, id, __);
		}
	};
}
