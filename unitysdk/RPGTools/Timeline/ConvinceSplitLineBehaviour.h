#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class ConvinceSplitLineClip; }

#define RPGTOOLS_TIMELINE_CONVINCESPLITLINEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8B95E0)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8B9600)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8B95F0)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B9890)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8B98A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ConvinceSplitLineBehaviour_TypeDefinitionIndex = 44809;

	class ConvinceSplitLineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::ConvinceSplitLineClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::ConvinceSplitLineClip* get_Clip()
		{
			return ((::RPGTools::Timeline::ConvinceSplitLineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::ConvinceSplitLineClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ConvinceSplitLineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINEBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
