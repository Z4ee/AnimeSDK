#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class DestroyEmojiBubbleClip; }

#define RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xCFFF650)
#define RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFFF670)
#define RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xCFFF660)
#define RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFFF750)
#define RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFFF760)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int DestroyEmojiBubbleBehaviour_TypeDefinitionIndex = 45392;

	class DestroyEmojiBubbleBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::DestroyEmojiBubbleClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::DestroyEmojiBubbleClip* get_Clip()
		{
			return ((::RPGTools::Timeline::DestroyEmojiBubbleClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::DestroyEmojiBubbleClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::DestroyEmojiBubbleClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
