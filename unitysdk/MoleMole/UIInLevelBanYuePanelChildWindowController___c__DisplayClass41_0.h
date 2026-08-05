#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelBanYuePanelChildWindowController; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIINLEVELBANYUEPANELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18373910)
#define MOLEMOLE_UIINLEVELBANYUEPANELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS41_0__REFRESHPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x18373920)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelBanYuePanelChildWindowController___c__DisplayClass41_0_TypeDefinitionIndex = 64790;

	class UIInLevelBanYuePanelChildWindowController___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* anim; // 0x10
		::MoleMole::UIInLevelBanYuePanelChildWindowController* __4__this; // 0x18
		::System::Int32 pointIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBANYUEPANELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPoint_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBANYUEPANELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS41_0__REFRESHPOINT_B__0_OFFSET))(this);
		}
	};
}
