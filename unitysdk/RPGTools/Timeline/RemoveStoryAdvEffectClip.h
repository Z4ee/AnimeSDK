#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD04F050)
#define RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xD04F040)
#define RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD04F1E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int RemoveStoryAdvEffectClip_TypeDefinitionIndex = 45598;

	class RemoveStoryAdvEffectClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* ConfigNameList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
