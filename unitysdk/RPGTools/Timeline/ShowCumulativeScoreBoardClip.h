#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CumulativeScoreBoardClipData; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B0C1C50)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B0C1C40)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDCLIP_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B0C1DE0)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C1E20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowCumulativeScoreBoardClip_TypeDefinitionIndex = 48739;

	class ShowCumulativeScoreBoardClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::CumulativeScoreBoardClipData* _Data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDCLIP_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
