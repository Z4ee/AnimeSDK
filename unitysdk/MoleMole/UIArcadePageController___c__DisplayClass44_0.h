#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1976BF70)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS44_0__ENTERSPINNINGTABLEPHASEFROMENTRANCEDIRECT_B__0_OFFSET UNITYSDK_OFFSET(0x19772530)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePageController___c__DisplayClass44_0_TypeDefinitionIndex = 83502;

	class UIArcadePageController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Action* finishCB; // 0x10
		::MoleMole::UIArcadePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterSpinningTablePhaseFromEntranceDirect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS44_0__ENTERSPINNINGTABLEPHASEFROMENTRANCEDIRECT_B__0_OFFSET))(this);
		}
	};
}
