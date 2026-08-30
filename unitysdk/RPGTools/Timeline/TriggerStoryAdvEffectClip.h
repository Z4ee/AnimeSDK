#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class StoryAdvEffectFollowOverride; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BF2E990)
#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1BF2E980)
#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_METHOD_4_0C7F8C77E3FCF51E_OFFSET UNITYSDK_OFFSET(0x1BF2E7F0)
#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2EAF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TriggerStoryAdvEffectClip_TypeDefinitionIndex = 48781;

	class TriggerStoryAdvEffectClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* ConfigNameList; // 0x20
		::System::Collections::Generic::List_1<::RPGTools::Timeline::StoryAdvEffectFollowOverride*>* FollowOverrides; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> Method_4_0C7F8C77E3FCF51E(::System::String* a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_METHOD_4_0C7F8C77E3FCF51E_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
