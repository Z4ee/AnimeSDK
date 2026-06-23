#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A3F38457E644339A.h"
#include "unitysdk/MoleMole/UILevelResultV2_VR_BossLongFight_PageController.h"

#define MOLEMOLE_UILEVELRESULTV2_VR_BIGBOSSLONGFIGHT_PAGECONTROLLER_GET_REWARDBUFFGAMETAG_OFFSET UNITYSDK_OFFSET(0x15279180)
#define MOLEMOLE_UILEVELRESULTV2_VR_BIGBOSSLONGFIGHT_PAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15279190)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_VR_BigBossLongFight_PageController_TypeDefinitionIndex = 42873;

	class UILevelResultV2_VR_BigBossLongFight_PageController : public ::MoleMole::UILevelResultV2_VR_BossLongFight_PageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_BIGBOSSLONGFIGHT_PAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_A3F38457E644339A get_RewardBuffGameTag()
		{
			return ((::Enum_3_A3F38457E644339A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_BIGBOSSLONGFIGHT_PAGECONTROLLER_GET_REWARDBUFFGAMETAG_OFFSET))(this);
		}
	};
}
