#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class RemoveEffectOnCharacter; }

#define RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB98E30)
#define RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB98F90)
#define RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB98FA0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int RemoveEffectOnCharacterBehaviour_TypeDefinitionIndex = 39153;

	class RemoveEffectOnCharacterBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::GameCore::RemoveEffectOnCharacter* Config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
