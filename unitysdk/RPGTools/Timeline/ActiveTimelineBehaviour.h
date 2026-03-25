#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xAB19DC0)
#define RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB19DE0)
#define RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB19F20)
#define RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB19E60)
#define RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xAB19DD0)
#define RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB19F80)
#define RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB19F90)
#define RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB19FB0)
#define RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB19FA0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ActiveTimelineBehaviour_TypeDefinitionIndex = 38664;

	class ActiveTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean Active; // 0x10
		::System::Boolean firstFrame; // 0x11
		::UnityEngine::GameObject* go; // 0x18
		::System::Boolean _IsFinished_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR_SET_ISFINISHED_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVETIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}
	};
}
