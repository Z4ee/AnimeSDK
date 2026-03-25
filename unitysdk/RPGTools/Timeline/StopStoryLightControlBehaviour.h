#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR_METHOD_2_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0xABA1A30)
#define RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABA19A0)
#define RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xABA1D00)
#define RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABA1D10)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StopStoryLightControlBehaviour_TypeDefinitionIndex = 39164;

	class StopStoryLightControlBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_7A73F165001BC325()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR_METHOD_2_7A73F165001BC325_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
