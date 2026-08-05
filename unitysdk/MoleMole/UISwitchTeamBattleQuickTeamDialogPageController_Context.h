#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISWITCHTEAMBATTLEQUICKTEAMDIALOGPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E1C400)

namespace MoleMole
{
	inline static constexpr unsigned int UISwitchTeamBattleQuickTeamDialogPageController_Context_TypeDefinitionIndex = 47367;

	class UISwitchTeamBattleQuickTeamDialogPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLEQUICKTEAMDIALOGPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
