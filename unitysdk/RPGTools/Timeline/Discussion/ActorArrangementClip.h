#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Discussion/RelativeTransform.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPG::GameCore { class LevelPerformanceInitialize; }
namespace RPGTools::Timeline::Discussion { class SwitchAnchorData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE83D0A0)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE83D090)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTCLIP_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE83D200)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE83D240)

namespace RPGTools::Timeline::Discussion
{
	inline static constexpr unsigned int ActorArrangementClip_TypeDefinitionIndex = 49233;

	class ActorArrangementClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean EditorPreviewOnly; // 0x18
		::System::String* AreaName; // 0x20
		::System::String* AnchorName; // 0x28
		::Il2CppArray<::RPGTools::Timeline::Discussion::RelativeTransform>* Transforms; // 0x30
		::Il2CppArray<::RPGTools::Timeline::Discussion::SwitchAnchorData*>* SwitchAnchors; // 0x38
		::RPG::GameCore::LevelPerformanceInitialize* _levelPerformanceInitialize; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTCLIP_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
