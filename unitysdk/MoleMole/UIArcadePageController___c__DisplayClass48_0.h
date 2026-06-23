#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173E0170)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS48_0__ENTERPLAYGAMEPHASEFROMARCADEMACHINE_B__0_OFFSET UNITYSDK_OFFSET(0x173E0180)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePageController___c__DisplayClass48_0_TypeDefinitionIndex = 60566;

	class UIArcadePageController___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::Action* finishCB; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterPlayGamePhaseFromArcadeMachine_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS48_0__ENTERPLAYGAMEPHASEFROMARCADEMACHINE_B__0_OFFSET))(this);
		}
	};
}
