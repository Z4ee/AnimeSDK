#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xAB459E0)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_GET_USEUNIQUECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xAB46150)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_METHOD_5_A0358A0F0CEEA8AA_OFFSET UNITYSDK_OFFSET(0xAB46020)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_METHOD_5_F821272A6F60651E_OFFSET UNITYSDK_OFFSET(0xAB45F30)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xAB46160)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xAB46250)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CutsceneCameraTrack_TypeDefinitionIndex = 38911;

	class CutsceneCameraTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::UnityEngine::Vector3 Position; // 0xC8
		::System::Boolean UseUI3DCamera; // 0xD4
		::System::Single NearClipPlane; // 0xD8
		::System::Single FarClipPlane; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Timeline::TimelineClip* Method_5_F821272A6F60651E(::UnityEngine::AnimationClip* a1)
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_METHOD_5_F821272A6F60651E_OFFSET))(this, a1);
		}

		::System::Void Method_5_A0358A0F0CEEA8AA(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_METHOD_5_A0358A0F0CEEA8AA_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_UseUniqueCharacterName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_GET_USEUNIQUECHARACTERNAME_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::System::Int32 P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, P0, P1, P2);
		}
	};
}
