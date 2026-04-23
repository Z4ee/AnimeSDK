#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BaseEmoTrack.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/UnityEngine/AnimationBlendMode.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_COMPILETRACKS_OFFSET UNITYSDK_OFFSET(0xB8C73D0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CREATELAYERMIXER_OFFSET UNITYSDK_OFFSET(0xB8C8DF0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xB8C7980)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0xB8C7120)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0xB8C7170)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_MONOEMOPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0xB8C7040)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0xB8C7240)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0xB8C7160)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xB8C7140)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET__FINALANIMLAYERMIXER_OFFSET UNITYSDK_OFFSET(0xB8C8BC0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_135C4934B2227080_OFFSET UNITYSDK_OFFSET(0xB8C9730)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB8C7200)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_599F562C167DA44B_OFFSET UNITYSDK_OFFSET(0xB8CA090)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_74588BEDD66375BF_OFFSET UNITYSDK_OFFSET(0xB8C7280)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_8143B69953D09724_OFFSET UNITYSDK_OFFSET(0xB8C9CF0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_9E4B9CA8FDF2FCBA_OFFSET UNITYSDK_OFFSET(0xB8C75B0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_BB08A9D2DE9BCA34_OFFSET UNITYSDK_OFFSET(0xB8C71B0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_D69A37A91B336CE9_OFFSET UNITYSDK_OFFSET(0xB8CADD0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xB8C8CB0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0xB8C7130)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xB8C7150)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET__FINALANIMLAYERMIXER_OFFSET UNITYSDK_OFFSET(0xB8C9640)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_UNITYENGINE_TIMELINE_ILAYERABLE_SHOWDEFAULTLAYEREDTRACKCOMMANDS_OFFSET UNITYSDK_OFFSET(0xB8C96F0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2__CTOR_OFFSET UNITYSDK_OFFSET(0xB8CAE30)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2___IFIXBASEPROXY_COMPILETRACKS_OFFSET UNITYSDK_OFFSET(0xB8CB000)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xB8CB010)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xB8CB0B0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int BaseEmoTimelineTrackV2_TypeDefinitionIndex = 45430;

	class BaseEmoTimelineTrackV2 : public ::RPGTools::Timeline::Emotion::BaseEmoTrack
	{
	public:
		// static const ::System::String* BrowTrackName; // 0x0
		// static const ::System::String* EyeTrackName; // 0x0
		// static const ::System::String* MouthTrackName; // 0x0
		// static const ::System::String* EyeCtrlTrackName; // 0x0
		// static const ::System::String* WwiseEventTrackName; // 0x0
		// static const ::System::String* FaceBlusherTrackName; // 0x0
		::UnityEngine::Animations::AnimationLayerMixerPlayable _ExclusiveFinalAnimLayerMixer; // 0xC8
		::RPG::Client::MonoEmoPlayableGraph* _MonoEmoPlayableGraph; // 0xD8
		::UnityEngine::AnimationBlendMode _BlendMode; // 0xE0
		::System::Single _Weight; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2__CTOR_OFFSET))(this);
		}

		::RPG::Client::MonoEmoPlayableGraph* get_MonoEmoPlayableGraph()
		{
			return ((::RPG::Client::MonoEmoPlayableGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_MONOEMOPLAYABLEGRAPH_OFFSET))(this);
		}

		::UnityEngine::AnimationBlendMode get_BlendMode()
		{
			return ((::UnityEngine::AnimationBlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_BLENDMODE_OFFSET))(this);
		}

		::System::Void set_BlendMode(::UnityEngine::AnimationBlendMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationBlendMode))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET_BLENDMODE_OFFSET))(this, a1);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_Weight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET_WEIGHT_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::Emotion::EmoTrackType get_TrackType()
		{
			return ((::RPGTools::Timeline::Emotion::EmoTrackType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_TRACKTYPE_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_DefaultClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET))(this);
		}

		::UnityEngine::AvatarMask* Method_7_BB08A9D2DE9BCA34(::System::Int32 a1)
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_BB08A9D2DE9BCA34_OFFSET))(this, a1);
		}

		::System::Boolean Method_7_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_391A84BCD9F51317_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_Positions()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_POSITIONS_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* Method_7_74588BEDD66375BF(::System::String* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_74588BEDD66375BF_OFFSET))(this, a1);
		}

		::System::Void CompileTracks(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_COMPILETRACKS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_ONCREATECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreateLayerMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CREATELAYERMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UnityEngine_Timeline_ILayerable_ShowDefaultLayeredTrackCommands()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_UNITYENGINE_TIMELINE_ILAYERABLE_SHOWDEFAULTLAYEREDTRACKCOMMANDS_OFFSET))(this);
		}

		::System::Void Method_7_135C4934B2227080(::RPGTools::Timeline::Emotion::BaseEmoTimelineTrackV2* a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::BaseEmoTimelineTrackV2*, ::UnityEngine::Animations::AnimationMixerPlayable&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_135C4934B2227080_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable Method_7_8143B69953D09724(::UnityEngine::Timeline::TimelineClip* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_8143B69953D09724_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable Method_7_599F562C167DA44B(::UnityEngine::Timeline::TimelineClip* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_599F562C167DA44B_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationClip* Method_7_D69A37A91B336CE9(::System::String* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_D69A37A91B336CE9_OFFSET))(this, a1);
		}

		::System::Void Method_7_9E4B9CA8FDF2FCBA(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_9E4B9CA8FDF2FCBA_OFFSET))(this, a1);
		}

		::UnityEngine::Animations::AnimationLayerMixerPlayable get__FinalAnimLayerMixer()
		{
			return ((::UnityEngine::Animations::AnimationLayerMixerPlayable(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET__FINALANIMLAYERMIXER_OFFSET))(this);
		}

		::System::Void set__FinalAnimLayerMixer(::UnityEngine::Animations::AnimationLayerMixerPlayable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationLayerMixerPlayable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET__FINALANIMLAYERMIXER_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_CompileTracks(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::Playables::Playable P1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* P2, ::UnityEngine::GameObject* P3, ::System::Boolean P4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2___IFIXBASEPROXY_COMPILETRACKS_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::System::Int32 P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, P0);
		}
	};
}
