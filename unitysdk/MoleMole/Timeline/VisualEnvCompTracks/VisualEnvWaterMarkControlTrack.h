#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/VisualEnvBaseControlTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19798AC0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x19798960)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLTRACK_METHOD_6_652F102150AC9967_OFFSET UNITYSDK_OFFSET(0x19798E70)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLTRACK_METHOD_6_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x19798EB0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19798E10)

namespace MoleMole::Timeline::VisualEnvCompTracks
{
	inline static constexpr unsigned int VisualEnvWaterMarkControlTrack_TypeDefinitionIndex = 42719;

	class VisualEnvWaterMarkControlTrack : public ::MoleMole::Timeline::VisualEnvBaseControlTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_6_652F102150AC9967(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLTRACK_METHOD_6_652F102150AC9967_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_6_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLTRACK_METHOD_6_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}
	};
}
