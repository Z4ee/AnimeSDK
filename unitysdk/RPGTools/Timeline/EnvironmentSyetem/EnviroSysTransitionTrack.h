#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB8DAD30)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnviroSysTransitionTrack_TypeDefinitionIndex = 45358;

	class EnviroSysTransitionTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONTRACK__CTOR_OFFSET))(this);
		}
	};
}
