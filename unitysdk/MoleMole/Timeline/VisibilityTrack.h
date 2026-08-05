#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/VisibilityTrack_Enum_3_A92A5D49790A47BD.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

class Class_2_9C51BDD302088099;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x18921E60)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_GET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x18921D40)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18921DF0)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x18922180)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_METHOD_5_F3B5D2FFB3A112AC_OFFSET UNITYSDK_OFFSET(0x18922170)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x18922090)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK_SET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x18921D50)
#define MOLEMOLE_TIMELINE_VISIBILITYTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18922110)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisibilityTrack_TypeDefinitionIndex = 66060;

	class VisibilityTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD m_PostPlaybackState; // 0xB0
		::Class_2_9C51BDD302088099* m_VisibilityMixer; // 0xB8
		::System::Boolean JustClip; // 0xC0
		::System::Boolean UnActive; // 0xC1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK__CTOR_OFFSET))(this);
		}

		::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD get_postPlaybackState()
		{
			return ((::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_GET_POSTPLAYBACKSTATE_OFFSET))(this);
		}

		::System::Void set_postPlaybackState(::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_SET_POSTPLAYBACKSTATE_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

		::System::Void Method_5_F3B5D2FFB3A112AC(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_METHOD_5_F3B5D2FFB3A112AC_OFFSET))(this, a1);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Method_5_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}
	};
}
