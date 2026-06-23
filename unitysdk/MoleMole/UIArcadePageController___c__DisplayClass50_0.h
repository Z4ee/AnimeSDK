#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x172AFC20)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS50_0__ENTERARCADEMACHINEPHASEFROMPLAYGAME_B__0_OFFSET UNITYSDK_OFFSET(0x172AFC30)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePageController___c__DisplayClass50_0_TypeDefinitionIndex = 60573;

	class UIArcadePageController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadePageController* __4__this; // 0x10
		::System::Action* finishCB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterArcadeMachinePhaseFromPlayGame_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS50_0__ENTERARCADEMACHINEPHASEFROMPLAYGAME_B__0_OFFSET))(this);
		}
	};
}
