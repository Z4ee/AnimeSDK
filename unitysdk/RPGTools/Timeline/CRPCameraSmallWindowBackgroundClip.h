#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CRPCameraSmallWindowBackgroundBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWBACKGROUNDCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xCFE4280)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWBACKGROUNDCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xCFE4270)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWBACKGROUNDCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE4370)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowBackgroundClip_TypeDefinitionIndex = 45193;

	class CRPCameraSmallWindowBackgroundClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::CRPCameraSmallWindowBackgroundBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWBACKGROUNDCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWBACKGROUNDCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWBACKGROUNDCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
