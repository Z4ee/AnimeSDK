#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISWITCHTEAMBATTLEDETAILROLEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13038490)

namespace MoleMole
{
	inline static constexpr unsigned int UISwitchTeamBattleDetailRoleRowWidgetController_Context_TypeDefinitionIndex = 70019;

	class UISwitchTeamBattleDetailRoleRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLEDETAILROLEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
