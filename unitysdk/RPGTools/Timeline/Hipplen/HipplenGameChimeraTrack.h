#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomUniqueNameTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERATRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8E2C70)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERATRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E2E00)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERATRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8E2E10)

namespace RPGTools::Timeline::Hipplen
{
	inline static constexpr unsigned int HipplenGameChimeraTrack_TypeDefinitionIndex = 45362;

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

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::UnityEngine::Timeline::TimelineClip* P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERATRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, P0, P1, P2);
		}
	};
}
