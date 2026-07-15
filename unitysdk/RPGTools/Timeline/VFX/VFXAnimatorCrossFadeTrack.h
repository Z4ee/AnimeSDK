#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_VFX_VFXANIMATORCROSSFADETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5B440)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXAnimatorCrossFadeTrack_TypeDefinitionIndex = 46872;

	class VFXAnimatorCrossFadeTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXANIMATORCROSSFADETRACK__CTOR_OFFSET))(this);
		}
	};
}
