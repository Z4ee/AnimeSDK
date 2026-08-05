#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18952090)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS46_0__ENTERARCADEMACHINEPHASEFROMSPINNINGTABLE_B__0_OFFSET UNITYSDK_OFFSET(0x189520A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePageController___c__DisplayClass46_0_TypeDefinitionIndex = 83510;

	class UIArcadePageController___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::Action* finishCB; // 0x10
		::MoleMole::UIArcadePageController* __4__this; // 0x18
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
