#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UIBALLGAMEROLEHUDCHILDWINDOWCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E0BA680)
#define MOLEMOLE_UIBALLGAMEROLEHUDCHILDWINDOWCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BA790)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameRoleHudChildWindowController_UIState_TypeDefinitionIndex = 89289;

	class UIBallGameRoleHudChildWindowController_UIState : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::Single>* TargetSp; // 0x60
		::Class_0_16E4307DCC419505_165<::System::Single>* CurHp; // 0x68
		::Class_0_16E4307DCC419505_165<::System::Single>* CurSp; // 0x70
		::Class_0_16E4307DCC419505_165<::System::Single>* MaxSp; // 0x78
		::Class_0_16E4307DCC419505_165<::System::Single>* MaxHp; // 0x80
		::Class_0_16E4307DCC419505_165<::System::Single>* ArrowPosition; // 0x88

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
