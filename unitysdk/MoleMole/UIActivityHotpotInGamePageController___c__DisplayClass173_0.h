#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotpotInGamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS173_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19282190)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS173_0__ONINLEVELPAUSERESTART_B__0_OFFSET UNITYSDK_OFFSET(0x192821A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass173_0_TypeDefinitionIndex = 87264;

	class UIActivityHotpotInGamePageController___c__DisplayClass173_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityHotpotInGamePageController* __4__this; // 0x10
		::System::Action* callBack; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS173_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnInLevelPauseRestart_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS173_0__ONINLEVELPAUSERESTART_B__0_OFFSET))(this);
		}
	};
}
