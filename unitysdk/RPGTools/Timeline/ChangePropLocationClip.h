#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B352A80)
#define RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B352A70)
#define RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B352C20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ChangePropLocationClip_TypeDefinitionIndex = 46142;

	class ChangePropLocationClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 PropID; // 0x1C
		::UnityEngine::Vector3 Position; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHANGEPROPLOCATIONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
