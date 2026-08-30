#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class EmojiIconConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_EMOJIBUBBLECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B575260)
#define RPGTOOLS_TIMELINE_EMOJIBUBBLECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B575250)
#define RPGTOOLS_TIMELINE_EMOJIBUBBLECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5753F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmojiBubbleClip_TypeDefinitionIndex = 48556;

	class EmojiBubbleClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::UInt32 PositionIndex; // 0x20
		::System::Boolean IsVertical; // 0x24
		::System::String* BubbleBGPath; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* EmojiIconPaths; // 0x30
		::RPG::Client::EmojiIconConfig* BgConfig; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::EmojiIconConfig*>* IconConfigs; // 0x40
		::System::Single Duration; // 0x48
		::System::Boolean UseDummyPosition; // 0x4C
		::UnityEngine::Vector3 BubblePositionOffset; // 0x50
		::System::Boolean IsLocalOffset; // 0x5C
		::System::Single BubbleScale; // 0x60
		::System::Single BubbleRoll; // 0x64
		::System::Boolean IsMirror; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOJIBUBBLECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOJIBUBBLECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOJIBUBBLECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
