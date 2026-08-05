#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALFIGHTINGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x173D95A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialFightingWidgetController_Context_TypeDefinitionIndex = 82310;

	class UIActivityTeamTrialFightingWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* onAbilitySelectChange; // 0x28
		::System::Int32 questID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALFIGHTINGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
