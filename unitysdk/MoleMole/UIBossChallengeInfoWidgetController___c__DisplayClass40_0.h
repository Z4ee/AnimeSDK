#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBossChallengeInfoWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12F74830)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS40_0__RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_B__0_OFFSET UNITYSDK_OFFSET(0x12F74840)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS40_0__RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_B__1_OFFSET UNITYSDK_OFFSET(0x12F74890)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeInfoWidgetController___c__DisplayClass40_0_TypeDefinitionIndex = 45915;

	class UIBossChallengeInfoWidgetController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Action* onFinished; // 0x10
		::MoleMole::UIBossChallengeInfoWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReConfirmSelectionChangedOnLineupClose_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS40_0__RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_B__0_OFFSET))(this);
		}

		::System::Void _ReConfirmSelectionChangedOnLineupClose_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS40_0__RECONFIRMSELECTIONCHANGEDONLINEUPCLOSE_B__1_OFFSET))(this);
		}
	};
}
