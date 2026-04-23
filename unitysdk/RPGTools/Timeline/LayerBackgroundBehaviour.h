#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/LayerBackgroundBehaviourData.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_74735925B23877B5;
namespace RPGTools::Timeline { class LayerBackgroundClip; }

#define RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8E3E00)
#define RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8E3FC0)
#define RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8E3E20)
#define RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8E3E10)
#define RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E4060)
#define RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8E4080)
#define RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8E4070)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LayerBackgroundBehaviour_TypeDefinitionIndex = 44889;

	class LayerBackgroundBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::LayerBackgroundBehaviourData Data; // 0x10
		::RPGTools::Timeline::LayerBackgroundClip* _Clip_k__BackingField; // 0x28
		::Class_1_74735925B23877B5* _PerformanceLayerBackgroundManager; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::LayerBackgroundClip* get_Clip()
		{
			return ((::RPGTools::Timeline::LayerBackgroundClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::LayerBackgroundClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::LayerBackgroundClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LAYERBACKGROUNDBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
