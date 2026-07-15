#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19A47A10)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19A47A00)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A47BA0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int DiscussionFaceExpressionClip_TypeDefinitionIndex = 46934;

	class DiscussionFaceExpressionClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* FaceExpressionKey; // 0x20
		::System::Single FadeDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
