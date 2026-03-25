#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/LightParameter.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_METHOD_3_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xAB9AEE0)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAB9A270)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_METHOD_3_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xAB9B690)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB9AE30)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB9A1E0)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB9A310)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB9B650)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB9B680)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB9B660)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB9B670)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SceneLightControlBehaviour_TypeDefinitionIndex = 39000;

	class SceneLightControlBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPGTools::Timeline::LightParameter _OriginParameter; // 0x18
		::RPGTools::Timeline::LightParameter lightParameter; // 0x48
		::System::Boolean _FirstFrameHappened; // 0x78
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x80
		::System::Boolean AutoReset; // 0x88
		::System::Boolean UseReference; // 0x89
		::UnityEngine::Transform* ReferenceObject; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_1F130271093617A5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_METHOD_3_1F130271093617A5_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void Method_3_BB2928BEC244DEB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_METHOD_3_BB2928BEC244DEB7_OFFSET))(this);
		}
	};
}
