#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_MOCAPCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B59EDB0)
#define RPGTOOLS_TIMELINE_MOCAPCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B59EDA0)
#define RPGTOOLS_TIMELINE_MOCAPCLIP_GET_OFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B59ED70)
#define RPGTOOLS_TIMELINE_MOCAPCLIP_SET_OFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B59ED90)
#define RPGTOOLS_TIMELINE_MOCAPCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B59EF40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MocapClip_TypeDefinitionIndex = 48648;

	class MocapClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::UnityEngine::AnimationClip* AnimClip; // 0x20
		::UnityEngine::Vector3 _OffsetPosition_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_OffsetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPCLIP_GET_OFFSETPOSITION_OFFSET))(this);
		}

		::System::Void set_OffsetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPCLIP_SET_OFFSETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
