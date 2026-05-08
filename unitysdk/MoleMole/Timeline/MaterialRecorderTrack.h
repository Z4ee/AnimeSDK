#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/MaterialBaseTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_MATERIALRECORDERTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1B79F360)
#define MOLEMOLE_TIMELINE_MATERIALRECORDERTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79F430)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialRecorderTrack_TypeDefinitionIndex = 30652;

	class MaterialRecorderTrack : public ::MoleMole::Timeline::MaterialBaseTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALRECORDERTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALRECORDERTRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
		}
	};
}
