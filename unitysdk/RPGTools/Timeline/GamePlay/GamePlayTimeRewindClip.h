#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B58D880)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B58D870)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDCLIP_GET_END_OFFSET UNITYSDK_OFFSET(0x1B58D850)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDCLIP_SET_END_OFFSET UNITYSDK_OFFSET(0x1B58D860)
#define RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B58DA10)

namespace RPGTools::Timeline::GamePlay
{
	inline static constexpr unsigned int GamePlayTimeRewindClip_TypeDefinitionIndex = 49107;

	class GamePlayTimeRewindClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 PropID; // 0x1C
		::System::Double _End_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDCLIP__CTOR_OFFSET))(this);
		}

		::System::Double get_End()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDCLIP_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDCLIP_SET_END_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GAMEPLAY_GAMEPLAYTIMEREWINDCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
