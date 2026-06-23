#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBallGameMainPageController; }

#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A3820)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS25_0__ONBALLPITINLEVELTRIGGERNEWBIE_B__0_OFFSET UNITYSDK_OFFSET(0x1E6A3830)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameMainPageController___c__DisplayClass25_0_TypeDefinitionIndex = 89377;

	class UIBallGameMainPageController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBallGameMainPageController* __4__this; // 0x10
		::System::Int32 newbieid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnBallPitInLevelTriggerNewbie_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS25_0__ONBALLPITINLEVELTRIGGERNEWBIE_B__0_OFFSET))(this);
		}
	};
}
