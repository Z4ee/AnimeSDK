#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB90A710)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB90A700)
#define RPGTOOLS_TIMELINE_PROPSETSCENETVMENUCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB90A900)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PropSetSceneTVMenuClip_TypeDefinitionIndex = 44995;

	class PropSetSceneTVMenuClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 PropID; // 0x24
		::System::Int32 MenuID; // 0x28
		::System::String* TVKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPSETSCENETVMENUCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
