#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class VFXTearClip_EyeTearConfig; }
namespace RPGTools::Timeline { class VFXTearClip_FaceTearConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_VFXTEARCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB92D1E0)
#define RPGTOOLS_TIMELINE_VFXTEARCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB92D1D0)
#define RPGTOOLS_TIMELINE_VFXTEARCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB92D3A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VFXTearClip_TypeDefinitionIndex = 44824;

	class VFXTearClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPGTools::Timeline::VFXTearClip_EyeTearConfig* LeftEye; // 0x20
		::RPGTools::Timeline::VFXTearClip_FaceTearConfig* LeftFace; // 0x28
		::RPGTools::Timeline::VFXTearClip_EyeTearConfig* RightEye; // 0x30
		::RPGTools::Timeline::VFXTearClip_FaceTearConfig* RightFace; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
