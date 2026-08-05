#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_FXCOMICDOTTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x129E2B60)
#define MOLEMOLE_TIMELINE_FXCOMICDOTTRACK_METHOD_6_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x129E2E10)
#define MOLEMOLE_TIMELINE_FXCOMICDOTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x129E2DB0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FXComicDotTrack_TypeDefinitionIndex = 67498;

	class FXComicDotTrack : public ::MoleMole::Timeline::PostProcessTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_6_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTTRACK_METHOD_6_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}
	};
}
