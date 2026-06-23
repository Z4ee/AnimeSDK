#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevel_BattleInfo_WithProgress_WidgetController.h"

#define MOLEMOLE_UIINLEVEL_BIGBOSSLONGFIGHT_BATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x157215F0)
#define MOLEMOLE_UIINLEVEL_BIGBOSSLONGFIGHT_BATTLEINFOWIDGETCONTROLLER__REFRESHREWARDS_OFFSET UNITYSDK_OFFSET(0x15720E60)
#define MOLEMOLE_UIINLEVEL_BIGBOSSLONGFIGHT_BATTLEINFOWIDGETCONTROLLER___BASE__REFRESHREWARDS_OFFSET UNITYSDK_OFFSET(0x15721600)

namespace MoleMole
{
	inline static constexpr unsigned int UIInlevel_BigBossLongFight_BattleInfoWidgetController_TypeDefinitionIndex = 52649;

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
