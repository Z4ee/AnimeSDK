#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class MonoDollyCameraController;
namespace RPGTools::Timeline { class MoveVirtualCameraOnDollyPathConfig; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB79E10)
#define RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB7A0E0)
#define RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7A230)
#define RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB7A240)
#define RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB7A250)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MoveVirtualCameraOnDollyPathBehaviour_TypeDefinitionIndex = 38689;

	class MoveVirtualCameraOnDollyPathBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::MoveVirtualCameraOnDollyPathConfig* ConfigRef; // 0x10
		::MonoDollyCameraController* _DollyCtrl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
