#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CameraShakeConfig; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8B7A50)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8B7A40)
#define RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B7C40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ConvinceDoubleScreenShakeClip_TypeDefinitionIndex = 44792;

	class ConvinceDoubleScreenShakeClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::CameraShakeConfig* ShakeConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEDOUBLESCREENSHAKECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
