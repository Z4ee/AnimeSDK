#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_STATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1FB9B0C0)
#define MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_STATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB9B140)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameSkillButtonSwitchChildWindowController_State_TypeDefinitionIndex = 93331;

	class UIBallGameSkillButtonSwitchChildWindowController_State : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::Single>* CoolDown; // 0x80

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
