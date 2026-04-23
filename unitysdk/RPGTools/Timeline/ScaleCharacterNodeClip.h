#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SCALECHARACTERNODECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB90E930)
#define RPGTOOLS_TIMELINE_SCALECHARACTERNODECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB90E920)
#define RPGTOOLS_TIMELINE_SCALECHARACTERNODECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB90EB20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ScaleCharacterNodeClip_TypeDefinitionIndex = 45010;

	class ScaleCharacterNodeClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* NodeNames; // 0x20
		::System::Single Scale; // 0x28
		::System::Boolean ResetOnClipEnd; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCALECHARACTERNODECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCALECHARACTERNODECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCALECHARACTERNODECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
