#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::PostProcessing { class VignetteTimelineBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB93AA0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB93A10)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_GET_EASEINDURATION_OFFSET UNITYSDK_OFFSET(0xAB93A60)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_GET_EASEOUTDURATION_OFFSET UNITYSDK_OFFSET(0xAB93A80)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_SET_EASEINDURATION_OFFSET UNITYSDK_OFFSET(0xAB93A70)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_SET_EASEOUTDURATION_OFFSET UNITYSDK_OFFSET(0xAB93A90)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB93CC0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB93D80)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP___IFIXBASEPROXY_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB93D30)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int VignetteTimelineClip_TypeDefinitionIndex = 39434;

	class VignetteTimelineClip : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip_1<::RPGTools::Timeline::PostProcessing::VignetteTimelineBehaviour*>
	{
	public:
		::System::Single _EaseInDuration_k__BackingField; // 0x28
		::System::Single _EaseOutDuration_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Single get_EaseInDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_GET_EASEINDURATION_OFFSET))(this);
		}

		::System::Void set_EaseInDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_SET_EASEINDURATION_OFFSET))(this, value);
		}

		::System::Single get_EaseOutDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_GET_EASEOUTDURATION_OFFSET))(this);
		}

		::System::Void set_EaseOutDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_SET_EASEOUTDURATION_OFFSET))(this, value);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps __iFixBaseProxy_get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP___IFIXBASEPROXY_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTETIMELINECLIP___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, P0, P1);
		}
	};
}
