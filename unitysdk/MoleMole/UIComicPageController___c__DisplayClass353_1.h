#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageController; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS353_1__CTOR_OFFSET UNITYSDK_OFFSET(0x176FBF10)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS353_1__SETUPBUBBLEAUDIOS_B__2_OFFSET UNITYSDK_OFFSET(0x176FBF20)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS353_1__SETUPBUBBLEAUDIOS_B__3_OFFSET UNITYSDK_OFFSET(0x176FBF50)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass353_1_TypeDefinitionIndex = 46627;

	class UIComicPageController___c__DisplayClass353_1 : public ::System::Object
	{
	public:
		::MoleMole::UIComicPageController* __4__this; // 0x10
		::System::UInt32 pendingId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS353_1__CTOR_OFFSET))(this);
		}

		::System::Void _SetupBubbleAudios_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS353_1__SETUPBUBBLEAUDIOS_B__2_OFFSET))(this);
		}

		::System::Void _SetupBubbleAudios_b__3(::System::UInt32 id, ::System::UInt32 __)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS353_1__SETUPBUBBLEAUDIOS_B__3_OFFSET))(this, id, __);
		}
	};
}
