#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D6F70)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnviroSysAdjustLevelTrack_TypeDefinitionIndex = 45348;

	class EnviroSysAdjustLevelTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSADJUSTLEVELTRACK__CTOR_OFFSET))(this);
		}
	};
}
