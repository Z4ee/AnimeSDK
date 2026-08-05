#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19287680)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS42_0__ENTERENTRANCEPHASEFROMSPINNINGTABLE_B__0_OFFSET UNITYSDK_OFFSET(0x19287690)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS42_0__ENTERENTRANCEPHASEFROMSPINNINGTABLE_B__1_OFFSET UNITYSDK_OFFSET(0x19287710)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePageController___c__DisplayClass42_0_TypeDefinitionIndex = 83508;

	class UIArcadePageController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadePageController* __4__this; // 0x10
		::System::Action* finishCB; // 0x18
		::System::Boolean muteFade; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterEntrancePhaseFromSpinningTable_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS42_0__ENTERENTRANCEPHASEFROMSPINNINGTABLE_B__0_OFFSET))(this);
		}

		::System::Void _EnterEntrancePhaseFromSpinningTable_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS42_0__ENTERENTRANCEPHASEFROMSPINNINGTABLE_B__1_OFFSET))(this);
		}
	};
}
