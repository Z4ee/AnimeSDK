#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_VREFFECTSTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x180AC530)
#define MOLEMOLE_TIMELINE_VREFFECTSTRACK_METHOD_6_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x180AC7E0)
#define MOLEMOLE_TIMELINE_VREFFECTSTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x180AC780)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VREffectsTrack_TypeDefinitionIndex = 72497;

	class VREffectsTrack : public ::MoleMole::Timeline::PostProcessTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_6_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSTRACK_METHOD_6_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}
	};
}
