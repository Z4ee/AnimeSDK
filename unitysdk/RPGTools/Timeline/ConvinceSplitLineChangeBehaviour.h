#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class ConvinceSplitLineChangeClip; }

#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8B98B0)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8B98D0)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8B98C0)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B9AE0)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8B9AF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ConvinceSplitLineChangeBehaviour_TypeDefinitionIndex = 44807;

	class ConvinceSplitLineChangeBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ConvinceSplitLineChangeClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ConvinceSplitLineChangeClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ConvinceSplitLineChangeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ConvinceSplitLineChangeClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ConvinceSplitLineChangeClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECHANGEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
