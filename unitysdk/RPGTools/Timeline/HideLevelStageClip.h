#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class HideLevelStageBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_HIDELEVELSTAGECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB6B900)
#define RPGTOOLS_TIMELINE_HIDELEVELSTAGECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB6B890)
#define RPGTOOLS_TIMELINE_HIDELEVELSTAGECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xAB6B8A0)
#define RPGTOOLS_TIMELINE_HIDELEVELSTAGECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB6BB10)
#define RPGTOOLS_TIMELINE_HIDELEVELSTAGECLIP___IFIXBASEPROXY_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xAB6BB60)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideLevelStageClip_TypeDefinitionIndex = 39250;

	class HideLevelStageClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::Single Duration; // 0x1C
		::RPGTools::Timeline::HideLevelStageBehaviour* template_; // 0x20
		::System::Single _duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDELEVELSTAGECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDELEVELSTAGECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDELEVELSTAGECLIP_GET_DURATION_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDELEVELSTAGECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Double __iFixBaseProxy_get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDELEVELSTAGECLIP___IFIXBASEPROXY_GET_DURATION_OFFSET))(this);
		}
	};
}
