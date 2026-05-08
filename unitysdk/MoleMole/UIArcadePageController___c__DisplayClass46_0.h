#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13EF77C0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS46_0__ENTERARCADEMACHINEPHASEFROMSPINNINGTABLE_B__0_OFFSET UNITYSDK_OFFSET(0x13EF77D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePageController___c__DisplayClass46_0_TypeDefinitionIndex = 75642;

	class UIArcadePageController___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadePageController* __4__this; // 0x10
		::System::Action* finishCB; // 0x18
		::System::Int32 arcadeGameID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterArcadeMachinePhaseFromSpinningTable_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS46_0__ENTERARCADEMACHINEPHASEFROMSPINNINGTABLE_B__0_OFFSET))(this);
		}
	};
}
