#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_OLDCRTTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1B20C700)
#define MOLEMOLE_TIMELINE_OLDCRTTRACK_METHOD_6_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x1B20C9B0)
#define MOLEMOLE_TIMELINE_OLDCRTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B20C950)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int OldCRTTrack_TypeDefinitionIndex = 43688;

	class OldCRTTrack : public ::MoleMole::Timeline::PostProcessTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_6_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTTRACK_METHOD_6_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}
	};
}
