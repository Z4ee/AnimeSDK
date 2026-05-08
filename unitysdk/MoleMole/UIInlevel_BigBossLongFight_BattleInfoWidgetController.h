#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevel_BattleInfo_WithProgress_WidgetController.h"

#define MOLEMOLE_UIINLEVEL_BIGBOSSLONGFIGHT_BATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x148B5C50)
#define MOLEMOLE_UIINLEVEL_BIGBOSSLONGFIGHT_BATTLEINFOWIDGETCONTROLLER__REFRESHREWARDS_OFFSET UNITYSDK_OFFSET(0x148B54B0)
#define MOLEMOLE_UIINLEVEL_BIGBOSSLONGFIGHT_BATTLEINFOWIDGETCONTROLLER___BASE__REFRESHREWARDS_OFFSET UNITYSDK_OFFSET(0x148B5C60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInlevel_BigBossLongFight_BattleInfoWidgetController_TypeDefinitionIndex = 59644;

	class UIInlevel_BigBossLongFight_BattleInfoWidgetController : public ::MoleMole::UIInLevel_BattleInfo_WithProgress_WidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_BIGBOSSLONGFIGHT_BATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_BIGBOSSLONGFIGHT_BATTLEINFOWIDGETCONTROLLER__REFRESHREWARDS_OFFSET))(this);
		}

		::System::Void __base__RefreshRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVEL_BIGBOSSLONGFIGHT_BATTLEINFOWIDGETCONTROLLER___BASE__REFRESHREWARDS_OFFSET))(this);
		}
	};
}
