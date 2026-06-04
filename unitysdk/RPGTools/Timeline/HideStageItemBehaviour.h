#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/HideStageItemBehaviour_StageItemInfo.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_METHOD_2_49765F1E3835BA67_OFFSET UNITYSDK_OFFSET(0xD024480)
#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD024720)
#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD0243F0)
#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD0247B0)
#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD0247D0)
#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD0247C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideStageItemBehaviour_TypeDefinitionIndex = 45437;

	class HideStageItemBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Il2CppArray<::RPGTools::Timeline::HideStageItemBehaviour_StageItemInfo>* ItemList; // 0x10
		::System::Boolean ActiveOnEnter; // 0x18
		::System::Boolean ActiveOnExit; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_49765F1E3835BA67(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_METHOD_2_49765F1E3835BA67_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}
	};
}
