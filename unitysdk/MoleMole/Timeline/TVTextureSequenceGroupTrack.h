#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x16071700)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPTRACK_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x160718D0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPTRACK_METHOD_5_652F102150AC9967_OFFSET UNITYSDK_OFFSET(0x16071940)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x160718E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVTextureSequenceGroupTrack_TypeDefinitionIndex = 41327;

	class TVTextureSequenceGroupTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPTRACK_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Method_5_652F102150AC9967(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPTRACK_METHOD_5_652F102150AC9967_OFFSET))(this, a1, a2, a3);
		}
	};
}
