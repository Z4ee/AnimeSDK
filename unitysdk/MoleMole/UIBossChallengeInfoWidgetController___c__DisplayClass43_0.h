#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBossChallengeInfoWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C06180)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS43_0__RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_B__0_OFFSET UNITYSDK_OFFSET(0x14C06190)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS43_0__RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_B__1_OFFSET UNITYSDK_OFFSET(0x14C061E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeInfoWidgetController___c__DisplayClass43_0_TypeDefinitionIndex = 45350;

	class UIBossChallengeInfoWidgetController___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBossChallengeInfoWidgetController* __4__this; // 0x10
		::System::Action* onFinished; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReConfirmSelectionChangedOnLineupClose_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS43_0__RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_B__0_OFFSET))(this);
		}

		::System::Void _ReConfirmSelectionChangedOnLineupClose_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS43_0__RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_B__1_OFFSET))(this);
		}
	};
}
