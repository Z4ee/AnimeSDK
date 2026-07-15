#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CharacterStoryMoveData; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19A60C20)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19A60DB0)
#define RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A60DC0)

namespace RPGTools::Timeline::Hipplen
{
	inline static constexpr unsigned int HipplenGameChimeraMoveClip_TypeDefinitionIndex = 46857;

	class HipplenGameChimeraMoveClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::CharacterStoryMoveData* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_HIPPLENGAMECHIMERAMOVECLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
