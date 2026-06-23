#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class TVTextureSequenceGroupBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x17E02090)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x17E02080)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x17E021E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVTextureSequenceGroupClip_TypeDefinitionIndex = 59233;

	class TVTextureSequenceGroupClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::TVTextureSequenceGroupBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
