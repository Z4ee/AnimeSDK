#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BaseEmoTimelineTrackV2.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0xD0170C0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_GET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0xD0170B0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_METHOD_8_343060CECD0CA112_OFFSET UNITYSDK_OFFSET(0xD017120)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_METHOD_8_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xD017510)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_METHOD_8_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xD017180)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_METHOD_8_BB08A9D2DE9BCA34_OFFSET UNITYSDK_OFFSET(0xD0174C0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xD0171C0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2__CTOR_OFFSET UNITYSDK_OFFSET(0xD017390)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2___IFIXBASEPROXY_GET_DEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0xD017480)
#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xD017550)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoMouthTimelineTrackV2_TypeDefinitionIndex = 46041;

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

		::UnityEngine::AnimationClip* __iFixBaseProxy_get_DefaultClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2___IFIXBASEPROXY_GET_DEFAULTCLIP_OFFSET))(this);
		}

		::UnityEngine::AvatarMask* Method_8_BB08A9D2DE9BCA34(::System::Int32 a1)
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_METHOD_8_BB08A9D2DE9BCA34_OFFSET))(this, a1);
		}

		::System::Boolean Method_8_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2_METHOD_8_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHTIMELINETRACKV2___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
