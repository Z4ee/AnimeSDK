#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Story { class CapturePropConfig; }
namespace RPGTools::Story { class EditorPerformanceCharacterConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B356D00)
#define RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B356CF0)
#define RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B356E90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterFollowPlatformMoveClip_TypeDefinitionIndex = 46181;

	class CharacterFollowPlatformMoveClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Collections::Generic::List_1<::RPGTools::Story::CapturePropConfig*>* Platforms; // 0x20
		::System::Collections::Generic::List_1<::RPGTools::Story::EditorPerformanceCharacterConfig*>* Characters; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
