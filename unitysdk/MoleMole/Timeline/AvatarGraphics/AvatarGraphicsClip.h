#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole { class UIAvatarGraphics; }
namespace MoleMole::Timeline::AvatarGraphics { class AvatarGraphicsBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1606D6B0)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1606D6A0)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP_METHOD_4_DF8DA585FF3B5AEC_OFFSET UNITYSDK_OFFSET(0x1606D890)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1606D800)

namespace MoleMole::Timeline::AvatarGraphics
{
	inline static constexpr unsigned int AvatarGraphicsClip_TypeDefinitionIndex = 75477;

	class AvatarGraphicsClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::AvatarGraphics::AvatarGraphicsBehavior* recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_DF8DA585FF3B5AEC(::MoleMole::UIAvatarGraphics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP_METHOD_4_DF8DA585FF3B5AEC_OFFSET))(this, a1);
		}
	};
}
