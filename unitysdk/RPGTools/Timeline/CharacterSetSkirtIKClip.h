#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1D140650)
#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1D140820)
#define RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D140830)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterSetSkirtIKClip_TypeDefinitionIndex = 48444;

	class CharacterSetSkirtIKClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Double Start; // 0x18
		::System::Double End; // 0x20
		::System::String* CharacterUniqueName; // 0x28
		::System::Boolean EnableHair; // 0x30
		::System::Boolean EnableSkirt; // 0x31
		::System::Single HairOffset_X; // 0x34
		::System::Single HairOffset_Y; // 0x38
		::System::Single Hair_Duration; // 0x3C
		::System::String* Hair_CurveName; // 0x40
		::System::Single HairErrTolerRate; // 0x48
		::System::Boolean DisableHairRestrict; // 0x4C
		::System::Single HairMaxRestrict; // 0x50
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSETSKIRTIKCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
