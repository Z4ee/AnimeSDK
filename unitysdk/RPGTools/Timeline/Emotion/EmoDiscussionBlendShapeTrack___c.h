#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8D23E0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CREATETRACKMIXER_B__3_0_OFFSET UNITYSDK_OFFSET(0xB8D2420)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D2410)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoDiscussionBlendShapeTrack___c_TypeDefinitionIndex = 45444;

	class EmoDiscussionBlendShapeTrack___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>**)Il2CppClass::FromTypeDefinitionIndex(EmoDiscussionBlendShapeTrack___c_TypeDefinitionIndex)->GetStaticField(0x69270);
		}
		static ::RPGTools::Timeline::Emotion::EmoDiscussionBlendShapeTrack___c** StaticGet___9()
		{
			return (::RPGTools::Timeline::Emotion::EmoDiscussionBlendShapeTrack___c**)Il2CppClass::FromTypeDefinitionIndex(EmoDiscussionBlendShapeTrack___c_TypeDefinitionIndex)->GetStaticField(0x69278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateTrackMixer_b__3_0(::UnityEngine::Timeline::TimelineClip* clip1, ::UnityEngine::Timeline::TimelineClip* clip2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CREATETRACKMIXER_B__3_0_OFFSET))(this, clip1, clip2);
		}
	};
}
