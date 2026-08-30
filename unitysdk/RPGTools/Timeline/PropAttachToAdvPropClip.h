#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B0B7130)
#define RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B0B7120)
#define RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B72C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PropAttachToAdvPropClip_TypeDefinitionIndex = 48697;

	class PropAttachToAdvPropClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* AttachPointName; // 0x20
		::System::UInt32 AttachedGroupID; // 0x28
		::System::UInt32 AttachedPropID; // 0x2C
		::System::String* AttachedPointName; // 0x30
		::UnityEngine::Vector3 PositionOffset; // 0x38
		::UnityEngine::Vector3 RotationOffset; // 0x44
		::System::Boolean IsStop; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
