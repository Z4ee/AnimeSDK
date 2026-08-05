#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x173BAFF0)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x173BB110)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x173BB1C0)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK_METHOD_5_064D173F66ED9F75_OFFSET UNITYSDK_OFFSET(0x173BB490)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK_METHOD_5_652F102150AC9967_OFFSET UNITYSDK_OFFSET(0x173BB4A0)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x173BB450)
#define MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x173BB3F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MihoyoControlTrack_TypeDefinitionIndex = 79884;

	class MihoyoControlTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::UnityEngine::Playables::Playable mixerPlayable; // 0xB0
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> rootTransform; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK_GATHERPROPERTIES_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable Method_5_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_064D173F66ED9F75(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK_METHOD_5_064D173F66ED9F75_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable Method_5_652F102150AC9967(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOCONTROLTRACK_METHOD_5_652F102150AC9967_OFFSET))(this, a1, a2, a3);
		}
	};
}
