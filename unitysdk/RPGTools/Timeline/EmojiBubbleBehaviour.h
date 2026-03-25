#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class EmojiBubbleClip; }

#define RPGTOOLS_TIMELINE_EMOJIBUBBLEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB51600)
#define RPGTOOLS_TIMELINE_EMOJIBUBBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB51620)
#define RPGTOOLS_TIMELINE_EMOJIBUBBLEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB51610)
#define RPGTOOLS_TIMELINE_EMOJIBUBBLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB51950)
#define RPGTOOLS_TIMELINE_EMOJIBUBBLEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB51960)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmojiBubbleBehaviour_TypeDefinitionIndex = 38938;

	class EmojiBubbleBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::EmojiBubbleClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOJIBUBBLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::EmojiBubbleClip* get_Clip()
		{
			return ((::RPGTools::Timeline::EmojiBubbleClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOJIBUBBLEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::EmojiBubbleClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmojiBubbleClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOJIBUBBLEBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOJIBUBBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOJIBUBBLEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
