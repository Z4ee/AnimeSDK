#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_9901AD5B2B6F7829;

#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF3410)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBattleQuickTeamWidgetController_Context_TypeDefinitionIndex = 53727;

	class UIGeneralBattleQuickTeamWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_9901AD5B2B6F7829* teamData; // 0x28
		::System::Boolean isOpenBuddy; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
