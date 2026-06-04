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

#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_COMPILETRACKS_OFFSET UNITYSDK_OFFSET(0xD00AB80)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CREATELAYERMIXER_OFFSET UNITYSDK_OFFSET(0xD00BA40)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xD00AF40)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0xD00A9A0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0xD00A9F0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_MONOEMOPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0xD00A8B0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0xD00AAC0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0xD00A9E0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xD00A9C0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET__FINALANIMLAYERMIXER_OFFSET UNITYSDK_OFFSET(0xD00B800)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_1ECD2F1A689739A1_OFFSET UNITYSDK_OFFSET(0xD00C5A0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xD00AA80)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_6EF2B09C83BA27A7_OFFSET UNITYSDK_OFFSET(0xD00C060)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_B16AF638490AB7B0_OFFSET UNITYSDK_OFFSET(0xD00C8D0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_B70CD8B01170B9FC_OFFSET UNITYSDK_OFFSET(0xD00AB00)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_BB08A9D2DE9BCA34_OFFSET UNITYSDK_OFFSET(0xD00AA30)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_C7959CA0476B8CD6_OFFSET UNITYSDK_OFFSET(0xD00D5B0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_EC3D8044F820B408_OFFSET UNITYSDK_OFFSET(0xD00ACA0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xD00B900)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0xD00A9B0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xD00A9D0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET__FINALANIMLAYERMIXER_OFFSET UNITYSDK_OFFSET(0xD00BF60)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_UNITYENGINE_TIMELINE_ILAYERABLE_SHOWDEFAULTLAYEREDTRACKCOMMANDS_OFFSET UNITYSDK_OFFSET(0xD00C020)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2__CTOR_OFFSET UNITYSDK_OFFSET(0xD00D610)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2___IFIXBASEPROXY_COMPILETRACKS_OFFSET UNITYSDK_OFFSET(0xD00D7E0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xD00D7F0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xD00D890)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int BaseEmoTimelineTrackV2_TypeDefinitionIndex = 46013;

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

		::UnityEngine::AnimationClip* Method_7_B70CD8B01170B9FC(::System::String* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_B70CD8B01170B9FC_OFFSET))(this, a1);
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

		::System::Void Method_7_6EF2B09C83BA27A7(::RPGTools::Timeline::Emotion::BaseEmoTimelineTrackV2* a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::BaseEmoTimelineTrackV2*, ::UnityEngine::Animations::AnimationMixerPlayable&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_6EF2B09C83BA27A7_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable Method_7_1ECD2F1A689739A1(::UnityEngine::Timeline::TimelineClip* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_1ECD2F1A689739A1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable Method_7_B16AF638490AB7B0(::UnityEngine::Timeline::TimelineClip* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_B16AF638490AB7B0_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationClip* Method_7_C7959CA0476B8CD6(::System::String* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_C7959CA0476B8CD6_OFFSET))(this, a1);
		}

		::System::Void Method_7_EC3D8044F820B408(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_METHOD_7_EC3D8044F820B408_OFFSET))(this, a1);
		}

		::UnityEngine::Animations::AnimationLayerMixerPlayable get__FinalAnimLayerMixer()
		{
			return ((::UnityEngine::Animations::AnimationLayerMixerPlayable(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET__FINALANIMLAYERMIXER_OFFSET))(this);
		}

		::System::Void set__FinalAnimLayerMixer(::UnityEngine::Animations::AnimationLayerMixerPlayable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationLayerMixerPlayable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET__FINALANIMLAYERMIXER_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_CompileTracks(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2___IFIXBASEPROXY_COMPILETRACKS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
