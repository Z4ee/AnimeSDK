#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class LiveStreamBulletCommentsClip; }

#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB74C40)
#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB74C60)
#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB74C50)
#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB74D00)
#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB74D10)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LiveStreamBulletCommentsBehaviour_TypeDefinitionIndex = 39012;

	class LiveStreamBulletCommentsBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::LiveStreamBulletCommentsClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::LiveStreamBulletCommentsClip* get_Clip()
		{
			return ((::RPGTools::Timeline::LiveStreamBulletCommentsClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::LiveStreamBulletCommentsClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::LiveStreamBulletCommentsClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
