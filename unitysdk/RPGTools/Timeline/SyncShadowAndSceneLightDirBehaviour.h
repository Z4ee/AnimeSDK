#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class EnvironmentSystem; }

#define RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xABAA010)
#define RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABA9F70)
#define RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xABAA0A0)
#define RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABAA0B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SyncShadowAndSceneLightDirBehaviour_TypeDefinitionIndex = 39171;

	class SyncShadowAndSceneLightDirBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean IsSync; // 0x10
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR_METHOD_2_9681042564541CD6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
