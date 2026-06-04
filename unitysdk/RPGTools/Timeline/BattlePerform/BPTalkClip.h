#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPG::GameCore { class SimpleTalkStyle; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xCFE0270)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xCFE0260)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE03D0)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPTalkClip_TypeDefinitionIndex = 46077;

	class BPTalkClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x18
		::System::Boolean HaveProtectTime; // 0x1C
		::System::Single ProtectTime; // 0x20
		::System::Boolean ProtectByVoice; // 0x24
		::System::Single ForceToNextTime; // 0x28
		::RPG::GameCore::SimpleTalkStyle* Style; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
