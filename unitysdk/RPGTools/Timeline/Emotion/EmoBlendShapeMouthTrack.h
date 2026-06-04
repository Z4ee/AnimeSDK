#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BaseEmoTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK_COMPILETRACKS_OFFSET UNITYSDK_OFFSET(0xD011210)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD011550)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xD011660)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0xD011120)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK_GET_USEUNIQUECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xD011110)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK_METHOD_7_1D3E0D19D91C431C_OFFSET UNITYSDK_OFFSET(0xD011310)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD0117E0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK___IFIXBASEPROXY_COMPILETRACKS_OFFSET UNITYSDK_OFFSET(0xD0118C0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD0118D0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xD011910)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBlendShapeMouthTrack_TypeDefinitionIndex = 46019;

	class EmoBlendShapeMouthTrack : public ::RPGTools::Timeline::Emotion::BaseEmoTrack
	{
	public:
		::RPG::Client::MonoEmoBlendShapesController* _controller; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseUniqueCharacterName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK_GET_USEUNIQUECHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::MonoEmoBlendShapesController* get_Controller()
		{
			return ((::RPG::Client::MonoEmoBlendShapesController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK_GET_CONTROLLER_OFFSET))(this);
		}

		::System::Void CompileTracks(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK_COMPILETRACKS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_7_1D3E0D19D91C431C(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK_METHOD_7_1D3E0D19D91C431C_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_CompileTracks(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK___IFIXBASEPROXY_COMPILETRACKS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEMOUTHTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}
