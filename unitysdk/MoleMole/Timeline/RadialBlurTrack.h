#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_RADIALBLURTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x191BDDE0)
#define MOLEMOLE_TIMELINE_RADIALBLURTRACK_METHOD_6_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x191BE090)
#define MOLEMOLE_TIMELINE_RADIALBLURTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x191BE030)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RadialBlurTrack_TypeDefinitionIndex = 90582;

	class RadialBlurTrack : public ::MoleMole::Timeline::PostProcessTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_6_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURTRACK_METHOD_6_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}
	};
}
