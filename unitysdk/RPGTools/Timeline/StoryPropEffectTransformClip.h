#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPG::GameCore { class TimelineOverrideEffectTransformOffsetParams; }
namespace RPG::GameCore { class TimelineOverrideEffectTransformRotateParams; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B0CD990)
#define RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B0CD980)
#define RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0CDB20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryPropEffectTransformClip_TypeDefinitionIndex = 48809;

	class StoryPropEffectTransformClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Boolean ResetToZero; // 0x21
		::System::Boolean OverrideFloating; // 0x22
		::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams* OffsetParams; // 0x28
		::System::Boolean OverrideRotating; // 0x30
		::RPG::GameCore::TimelineOverrideEffectTransformRotateParams* RotateParams; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
