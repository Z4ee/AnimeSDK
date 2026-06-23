#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4EB10)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS43_0__ENTERSPINNINGTABLEPHASEFROMENTRANCE_B__0_OFFSET UNITYSDK_OFFSET(0x18A4EBD0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS43_0__ENTERSPINNINGTABLEPHASEFROMENTRANCE_B__1_OFFSET UNITYSDK_OFFSET(0x18A4EB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePageController___c__DisplayClass43_0_TypeDefinitionIndex = 60570;

	class UIArcadePageController___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadePageController* __4__this; // 0x10
		::System::Action* finishCB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterSpinningTablePhaseFromEntrance_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS43_0__ENTERSPINNINGTABLEPHASEFROMENTRANCE_B__1_OFFSET))(this);
		}

		::System::Void _EnterSpinningTablePhaseFromEntrance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS43_0__ENTERSPINNINGTABLEPHASEFROMENTRANCE_B__0_OFFSET))(this);
		}
	};
}
