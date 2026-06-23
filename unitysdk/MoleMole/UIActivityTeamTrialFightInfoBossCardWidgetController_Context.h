#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYTEAMTRIALFIGHTINFOBOSSCARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17E28740)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialFightInfoBossCardWidgetController_Context_TypeDefinitionIndex = 86393;

	class UIActivityTeamTrialFightInfoBossCardWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 questID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALFIGHTINFOBOSSCARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
