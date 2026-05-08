#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotpotInGamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS174_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4B0A0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS174_0__ONINLEVELPAUSEEXIT_B__0_OFFSET UNITYSDK_OFFSET(0x12B4B0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass174_0_TypeDefinitionIndex = 53755;

	class UIActivityHotpotInGamePageController___c__DisplayClass174_0 : public ::System::Object
	{
	public:
		::System::Action* callBack; // 0x10
		::MoleMole::UIActivityHotpotInGamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS174_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnInLevelPauseExit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS174_0__ONINLEVELPAUSEEXIT_B__0_OFFSET))(this);
		}
	};
}
