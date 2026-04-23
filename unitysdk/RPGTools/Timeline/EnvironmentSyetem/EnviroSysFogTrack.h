#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D9850)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnviroSysFogTrack_TypeDefinitionIndex = 45352;

	class EnviroSysFogTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGTRACK__CTOR_OFFSET))(this);
		}
	};
}
