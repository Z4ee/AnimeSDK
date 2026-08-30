#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_VFX_VFXTIMELINETRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BF372A0)
#define RPGTOOLS_TIMELINE_VFX_VFXTIMELINETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1BF373A0)
#define RPGTOOLS_TIMELINE_VFX_VFXTIMELINETRACK_GET_GENDERTYPE_OFFSET UNITYSDK_OFFSET(0x1BF374C0)
#define RPGTOOLS_TIMELINE_VFX_VFXTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF374D0)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXTimelineTrack_TypeDefinitionIndex = 49142;

	class VFXTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::RPG::GameCore::GenderType _genderType; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXTIMELINETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXTIMELINETRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXTIMELINETRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GenderType get_GenderType()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXTIMELINETRACK_GET_GENDERTYPE_OFFSET))(this);
		}
	};
}
