#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevel_BattleInfo_WithProgress_WidgetController.h"

#define MOLEMOLE_UIINLEVEL_PUREBATTLE_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18291AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevel_PureBattle_BattleInfo_WithProgress_WidgetController_TypeDefinitionIndex = 41197;

	class UIInLevel_PureBattle_BattleInfo_WithProgress_WidgetController : public ::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_PUREBATTLE_BATTLEINFO_WITHPROGRESS_WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
