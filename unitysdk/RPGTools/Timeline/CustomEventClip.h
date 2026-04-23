#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

#define RPGTOOLS_TIMELINE_CUSTOMEVENTCLIP_UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8BA300)
#define RPGTOOLS_TIMELINE_CUSTOMEVENTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB8BA310)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CustomEventClip_TypeDefinitionIndex = 45122;

	class CustomEventClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Double Start; // 0x18
		::System::Double End; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUSTOMEVENTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps UnityEngine_Timeline_ITimelineClipAsset_get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUSTOMEVENTCLIP_UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
