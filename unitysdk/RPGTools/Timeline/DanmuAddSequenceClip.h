#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_DANMUADDSEQUENCECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1D14CCF0)
#define RPGTOOLS_TIMELINE_DANMUADDSEQUENCECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1D14CCE0)
#define RPGTOOLS_TIMELINE_DANMUADDSEQUENCECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D14CE80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int DanmuAddSequenceClip_TypeDefinitionIndex = 48521;

	class DanmuAddSequenceClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::UInt32 TextGroupId; // 0x18
		::System::UInt32 ImageGroupId; // 0x1C
		::System::UInt32 GiftGroupId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DANMUADDSEQUENCECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DANMUADDSEQUENCECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DANMUADDSEQUENCECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
