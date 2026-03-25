#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BaseShowDialogBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define RPGTOOLS_TIMELINE_SHOWFIGHTFESTPERFORMANCETOASTDIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB9F080)
#define RPGTOOLS_TIMELINE_SHOWFIGHTFESTPERFORMANCETOASTDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB9F100)
#define RPGTOOLS_TIMELINE_SHOWFIGHTFESTPERFORMANCETOASTDIALOGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB9F110)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowFightFestPerformanceToastDialogBehaviour_TypeDefinitionIndex = 39128;

	class ShowFightFestPerformanceToastDialogBehaviour : public ::RPGTools::Timeline::BaseShowDialogBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWFIGHTFESTPERFORMANCETOASTDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWFIGHTFESTPERFORMANCETOASTDIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWFIGHTFESTPERFORMANCETOASTDIALOGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
