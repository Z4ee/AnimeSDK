#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xCFE17B0)
#define RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xCFE17A0)
#define RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE1940)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BlockSetVisibilityClip_TypeDefinitionIndex = 45176;

	class BlockSetVisibilityClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean Visible; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* BlockTags; // 0x20
		::RPG::GameCore::HoyoTagContainer* BlockHoyoTags; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* BlockAlias; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
