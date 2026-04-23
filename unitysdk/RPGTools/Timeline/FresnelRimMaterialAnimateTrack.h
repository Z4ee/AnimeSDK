#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_FRESNELRIMMATERIALANIMATETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB8DDDD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FresnelRimMaterialAnimateTrack_TypeDefinitionIndex = 44823;

	class FresnelRimMaterialAnimateTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FRESNELRIMMATERIALANIMATETRACK__CTOR_OFFSET))(this);
		}
	};
}
