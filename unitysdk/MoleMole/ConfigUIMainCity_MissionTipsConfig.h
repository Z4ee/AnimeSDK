#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGUIMAINCITY_MISSIONTIPSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15A07550)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainCity_MissionTipsConfig_TypeDefinitionIndex = 46896;

	class ConfigUIMainCity_MissionTipsConfig : public ::System::Object
	{
	public:
		::System::Single CharacterTipRemoveTime; // 0x10
		::System::Single IntervalShow; // 0x14
		::System::Single CharacterTipDuration; // 0x18
		::System::Single RecommendWait; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_MISSIONTIPSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
