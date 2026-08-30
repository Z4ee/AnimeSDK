#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomUniqueNameTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERATRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE864FB0)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERATRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE865150)

namespace RPGTools::Timeline::Hipplen
{
	inline static constexpr unsigned int HipplenGameChimeraTrack_TypeDefinitionIndex = 49104;

	class HipplenGameChimeraTrack : public ::RPGTools::Timeline::CustomUniqueNameTrack
	{
	public:
		::Il2CppArray<::System::UInt32>* ChimeraRandomIDs; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERATRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERATRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}
	};
}
