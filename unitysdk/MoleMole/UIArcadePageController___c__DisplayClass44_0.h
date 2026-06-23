#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181C4700)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS44_0__ENTERSPINNINGTABLEPHASEFROMENTRANCEDIRECT_B__0_OFFSET UNITYSDK_OFFSET(0x181CACD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePageController___c__DisplayClass44_0_TypeDefinitionIndex = 60571;

	class UIArcadePageController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadePageController* __4__this; // 0x10
		::System::Action* finishCB; // 0x18

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
