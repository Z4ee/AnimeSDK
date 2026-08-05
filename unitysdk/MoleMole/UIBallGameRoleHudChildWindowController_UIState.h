#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_UIBALLGAMEROLEHUDCHILDWINDOWCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1FC0A020)
#define MOLEMOLE_UIBALLGAMEROLEHUDCHILDWINDOWCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC0A140)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameRoleHudChildWindowController_UIState_TypeDefinitionIndex = 93427;

	class UIBallGameRoleHudChildWindowController_UIState : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::Single>* CurSp; // 0x80
		::Class_0_16E4307DCC419505_159<::System::Single>* TargetSp; // 0x88
		::Class_0_16E4307DCC419505_159<::System::Single>* ArrowPosition; // 0x90
		::Class_0_16E4307DCC419505_159<::System::Single>* CurHp; // 0x98
		::Class_0_16E4307DCC419505_159<::System::Single>* MaxHp; // 0xA0
		::Class_0_16E4307DCC419505_159<::System::Single>* MaxSp; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLEHUDCHILDWINDOWCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLEHUDCHILDWINDOWCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
