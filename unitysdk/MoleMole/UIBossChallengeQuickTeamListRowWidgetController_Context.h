#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBOSSCHALLENGEQUICKTEAMLISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x142D6620)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeQuickTeamListRowWidgetController_Context_TypeDefinitionIndex = 76474;

	class UIBossChallengeQuickTeamListRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEQUICKTEAMLISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
