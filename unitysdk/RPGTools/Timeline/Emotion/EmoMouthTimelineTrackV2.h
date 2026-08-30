#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BaseEmoTimelineTrackV2.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0x1B580F60)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_GET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0x1B580F50)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_METHOD_8_343060CECD0CA112_OFFSET UNITYSDK_OFFSET(0x1B580FC0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_METHOD_8_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1B581020)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1B581060)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B581230)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoMouthTimelineTrackV2_TypeDefinitionIndex = 49226;

	class EmoMouthTimelineTrackV2 : public ::RPGTools::Timeline::Emotion::BaseEmoTimelineTrackV2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Emotion::EmoTrackType get_TrackType()
		{
			return ((::RPGTools::Timeline::Emotion::EmoTrackType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_GET_TRACKTYPE_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_DefaultClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET))(this);
		}

		::UnityEngine::AvatarMask* Method_8_343060CECD0CA112(::System::Int32 a1)
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_METHOD_8_343060CECD0CA112_OFFSET))(this, a1);
		}

		::System::Boolean Method_8_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_METHOD_8_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
