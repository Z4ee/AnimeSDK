#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xABAF9C0)
#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_GET_TIMELINEORIGINPOSITION_OFFSET UNITYSDK_OFFSET(0xABAF9E0)
#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_GET_TIMELINEORIGINROTATION_OFFSET UNITYSDK_OFFSET(0xABAFA10)
#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xABAFA40)
#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xABAFB80)
#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xABAFAC0)
#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xABAF9D0)
#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_SET_TIMELINEORIGINPOSITION_OFFSET UNITYSDK_OFFSET(0xABAFA00)
#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_SET_TIMELINEORIGINROTATION_OFFSET UNITYSDK_OFFSET(0xABAFA30)
#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xABAFBE0)
#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xABAFBF0)
#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xABAFC10)
#define RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xABAFC00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TransformTimelineBehaviour_TypeDefinitionIndex = 39325;

	class TransformTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C
		::UnityEngine::Vector3 Scale; // 0x2C
		::System::Boolean firstFrame; // 0x38
		::UnityEngine::GameObject* go; // 0x40
		::System::Boolean _IsFinished_k__BackingField; // 0x48
		::UnityEngine::Vector3 _TimelineOriginPosition_k__BackingField; // 0x4C
		::UnityEngine::Vector3 _TimelineOriginRotation_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_SET_ISFINISHED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_TimelineOriginPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_GET_TIMELINEORIGINPOSITION_OFFSET))(this);
		}

		::System::Void set_TimelineOriginPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_SET_TIMELINEORIGINPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_TimelineOriginRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_GET_TIMELINEORIGINROTATION_OFFSET))(this);
		}

		::System::Void set_TimelineOriginRotation(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_SET_TIMELINEORIGINROTATION_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSFORMTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}
	};
}
