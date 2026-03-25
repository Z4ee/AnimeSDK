#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BaseEmoTimelineTrackV2.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0xAB5C140)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0xAB5C490)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2_GET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0xAB5C130)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2_METHOD_8_70C937D80C788570_OFFSET UNITYSDK_OFFSET(0xAB5C850)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2_METHOD_8_CE0859C9827AE952_OFFSET UNITYSDK_OFFSET(0xAB5C260)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xAB5C500)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB5C7B0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2__CTOR_OFFSET UNITYSDK_OFFSET(0xAB5C6C0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2___IFIXBASEPROXY_GET_DEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0xAB5C810)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2___IFIXBASEPROXY_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0xAB5C8A0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xAB5C8E0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBrowTimelineTrackV2_TypeDefinitionIndex = 39530;

	class EmoBrowTimelineTrackV2 : public ::RPGTools::Timeline::Emotion::BaseEmoTimelineTrackV2
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_k_Positions()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EmoBrowTimelineTrackV2_TypeDefinitionIndex)->GetStaticField(0x47B80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2__CCTOR_OFFSET))();
		}

		::RPGTools::Timeline::Emotion::EmoTrackType get_TrackType()
		{
			return ((::RPGTools::Timeline::Emotion::EmoTrackType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2_GET_TRACKTYPE_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_DefaultClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET))(this);
		}

		::UnityEngine::AvatarMask* Method_8_CE0859C9827AE952(::System::Int32 a1)
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2_METHOD_8_CE0859C9827AE952_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_Positions()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2_GET_POSITIONS_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2_ONCREATECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationClip* __iFixBaseProxy_get_DefaultClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2___IFIXBASEPROXY_GET_DEFAULTCLIP_OFFSET))(this);
		}

		::UnityEngine::AvatarMask* Method_8_70C937D80C788570(::System::Int32 P0)
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2_METHOD_8_70C937D80C788570_OFFSET))(this, P0);
		}

		::Il2CppArray<::System::Int32>* __iFixBaseProxy_get_Positions()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2___IFIXBASEPROXY_GET_POSITIONS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBROWTIMELINETRACKV2___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, P0);
		}
	};
}
