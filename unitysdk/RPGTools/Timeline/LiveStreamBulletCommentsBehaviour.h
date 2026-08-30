#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class LiveStreamBulletCommentsClip; }

#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE86CD50)
#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE86CD70)
#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE86CD60)
#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE86CE10)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LiveStreamBulletCommentsBehaviour_TypeDefinitionIndex = 48632;

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

		::System::Void set_Clip(::RPGTools::Timeline::LiveStreamBulletCommentsClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::LiveStreamBulletCommentsClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
