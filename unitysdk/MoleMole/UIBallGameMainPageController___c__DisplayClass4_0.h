#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBallGameMainPageController; }

#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E86E0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS4_0__OPENTUTORIAL_B__0_OFFSET UNITYSDK_OFFSET(0x1F3E86F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameMainPageController___c__DisplayClass4_0_TypeDefinitionIndex = 93362;

	class UIBallGameMainPageController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBallGameMainPageController* __4__this; // 0x10
		::System::Int32 popID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenTutorial_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS4_0__OPENTUTORIAL_B__0_OFFSET))(this);
		}
	};
}
