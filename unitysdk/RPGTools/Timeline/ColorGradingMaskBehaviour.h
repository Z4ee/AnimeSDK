#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class ColorGradingMaskClip; }

#define RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xCFFA440)
#define RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFFA460)
#define RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xCFFA690)
#define RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xCFFA450)
#define RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFFA820)
#define RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFFA830)
#define RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xCFFA840)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ColorGradingMaskBehaviour_TypeDefinitionIndex = 45738;

	class ColorGradingMaskBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ColorGradingMaskClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ColorGradingMaskClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ColorGradingMaskClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ColorGradingMaskClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, a1);
		}
	};
}
