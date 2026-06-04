#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class ConvincePanelActiveClip; }

#define RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xCFFC210)
#define RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFFC230)
#define RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xCFFC220)
#define RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFFC440)
#define RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFFC450)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ConvincePanelActiveBehaviour_TypeDefinitionIndex = 45350;

	class ConvincePanelActiveBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ConvincePanelActiveClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ConvincePanelActiveClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ConvincePanelActiveClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ConvincePanelActiveClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ConvincePanelActiveClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCEPANELACTIVEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
