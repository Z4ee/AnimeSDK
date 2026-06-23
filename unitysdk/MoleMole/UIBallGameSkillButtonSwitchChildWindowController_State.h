#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_STATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E173EE0)
#define MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_STATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E173F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameSkillButtonSwitchChildWindowController_State_TypeDefinitionIndex = 89539;

	class UIBallGameSkillButtonSwitchChildWindowController_State : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::Single>* CoolDown; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_STATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_STATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
