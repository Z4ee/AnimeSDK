#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class MotionBlurBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_MOTIONBLURCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x190BF330)
#define MOLEMOLE_TIMELINE_MOTIONBLURCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x190BF320)
#define MOLEMOLE_TIMELINE_MOTIONBLURCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x190BF510)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MotionBlurClip_TypeDefinitionIndex = 52620;

	class MotionBlurClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::MotionBlurBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
