#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGUIMAINCITY_MISSIONTIPSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190D4040)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainCity_MissionTipsConfig_TypeDefinitionIndex = 75643;

	class ConfigUIMainCity_MissionTipsConfig : public ::System::Object
	{
	public:
		::System::Single IntervalShow; // 0x10
		::System::Single CharacterTipDuration; // 0x14
		::System::Single RecommendWait; // 0x18
		::System::Single CharacterTipRemoveTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_MISSIONTIPSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
