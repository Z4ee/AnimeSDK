#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityDemoTrialBGEffectWidgetController; }

#define MOLEMOLE_UIACTIVITYRETURNDEMOINFOWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBF6C0)
#define MOLEMOLE_UIACTIVITYRETURNDEMOINFOWIDGETCONTROLLER___C__DISPLAYCLASS7_0__STARTEXCHANGEROLEANIM_B__0_OFFSET UNITYSDK_OFFSET(0x15EBF6D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnDemoInfoWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 81670;

	class UIActivityReturnDemoInfoWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityDemoTrialBGEffectWidgetController* nextWidget; // 0x10
		::MoleMole::UIActivityDemoTrialBGEffectWidgetController* targetWidget; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDEMOINFOWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartExchangeRoleAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDEMOINFOWIDGETCONTROLLER___C__DISPLAYCLASS7_0__STARTEXCHANGEROLEANIM_B__0_OFFSET))(this);
		}
	};
}
