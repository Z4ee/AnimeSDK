#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xCFD77E0)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xCFD7890)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK_GET_USEUNIQUECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xCFD7E90)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK_ONINSPECTOR_OFFSET UNITYSDK_OFFSET(0xCFD7EA0)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD8920)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xCFD8930)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xCFD8970)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK___IFIXBASEPROXY_ONINSPECTOR_OFFSET UNITYSDK_OFFSET(0xCFD8A10)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorEnableControlTrack_TypeDefinitionIndex = 45491;

	class AnimatorEnableControlTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_UseUniqueCharacterName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK_GET_USEUNIQUECHARACTERNAME_OFFSET))(this);
		}

		::System::Void OnInspector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK_ONINSPECTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnInspector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLTRACK___IFIXBASEPROXY_ONINSPECTOR_OFFSET))(this);
		}
	};
}
