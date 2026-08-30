#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B57EE40)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CREATETRACKMIXER_B__3_0_OFFSET UNITYSDK_OFFSET(0x1B57EE80)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B57EE70)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoDiscussionBlendShapeTrack___c_TypeDefinitionIndex = 49212;

	class EmoDiscussionBlendShapeTrack___c : public ::System::Object
	{
	public:
		static ::RPGTools::Timeline::Emotion::EmoDiscussionBlendShapeTrack___c** StaticGet___9()
		{
			return (::RPGTools::Timeline::Emotion::EmoDiscussionBlendShapeTrack___c**)Il2CppClass::FromTypeDefinitionIndex(EmoDiscussionBlendShapeTrack___c_TypeDefinitionIndex)->GetStaticField(0x3E020);
		}
		static ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>**)Il2CppClass::FromTypeDefinitionIndex(EmoDiscussionBlendShapeTrack___c_TypeDefinitionIndex)->GetStaticField(0x3E028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateTrackMixer_b__3_0(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::Timeline::TimelineClip* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONBLENDSHAPETRACK___C__CREATETRACKMIXER_B__3_0_OFFSET))(this, a1, a2);
		}
	};
}
