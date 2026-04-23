#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::PostProcessing { class LipLineFixScaleTimelineBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB901A40)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINECLIP_GET_AUTORESET_OFFSET UNITYSDK_OFFSET(0xB901A10)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB901A30)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINECLIP_SET_AUTORESET_OFFSET UNITYSDK_OFFSET(0xB901A20)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB901C20)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int LipLineFixScaleTimelineClip_TypeDefinitionIndex = 45294;

	class LipLineFixScaleTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Boolean _AutoReset_k__BackingField; // 0x20
		::RPGTools::Timeline::PostProcessing::LipLineFixScaleTimelineBehaviour* Template; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINECLIP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AutoReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINECLIP_GET_AUTORESET_OFFSET))(this);
		}

		::System::Void set_AutoReset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINECLIP_SET_AUTORESET_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_LIPLINEFIXSCALETIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
