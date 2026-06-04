#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BaseShowDialogBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD053F90)
#define RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD054010)
#define RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD054020)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowChimeraGoalsDialogBehaviour_TypeDefinitionIndex = 45572;

	class ShowChimeraGoalsDialogBehaviour : public ::RPGTools::Timeline::BaseShowDialogBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}
	};
}
