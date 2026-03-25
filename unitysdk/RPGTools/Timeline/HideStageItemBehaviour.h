#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/HideStageItemBehaviour_StageItemInfo.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_METHOD_2_22FAD70342736A5A_OFFSET UNITYSDK_OFFSET(0xAB6D8B0)
#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB6DBE0)
#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB6D820)
#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB6DC70)
#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB6DC90)
#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB6DC80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideStageItemBehaviour_TypeDefinitionIndex = 38977;

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

		::System::Void Method_2_22FAD70342736A5A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_METHOD_2_22FAD70342736A5A_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
