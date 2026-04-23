#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline { class CameraData; }
namespace RPGTools::Timeline { class MainCameraTimelineClip; }
namespace System { class Object; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0xB8EB370)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB8EB3D0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_ROLL_OFFSET UNITYSDK_OFFSET(0xB8EB3B0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_TIMELINEORIGINPOSITION_OFFSET UNITYSDK_OFFSET(0xB8EB3F0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_TIMELINEORIGINROTATION_OFFSET UNITYSDK_OFFSET(0xB8EB430)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8EBEF0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8EB790)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8EB450)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB8EBD70)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8EB860)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0xB8EB390)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB8EB3E0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_ROLL_OFFSET UNITYSDK_OFFSET(0xB8EB3C0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_TIMELINEORIGINPOSITION_OFFSET UNITYSDK_OFFSET(0xB8EB410)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_TIMELINEORIGINROTATION_OFFSET UNITYSDK_OFFSET(0xB8EB440)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8EBF30)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8EBF60)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8EBF50)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB8EBF80)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8EBF70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MainCameraTimelineBehaviour_TypeDefinitionIndex = 45170;

	class MainCameraTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 LookAt; // 0x1C
		::System::Single Fov; // 0x28
		::UnityEngine::Vector3 LookAtOffset; // 0x2C
		::UnityEngine::Quaternion Rotation; // 0x38
		::RPGTools::Timeline::MainCameraTimelineClip* MainCameraClip; // 0x48
		::UnityEngine::AnimationClip* ClipRef; // 0x50
		::System::Boolean LookAtMode; // 0x58
		::UnityEngine::GameObject* LookAtTarget; // 0x60
		::System::Boolean IgnoreTimeScale; // 0x68
		::System::Boolean EnterLerp; // 0x69
		::System::Single EnterLerpDuration; // 0x6C
		::System::Boolean ExitLerp; // 0x70
		::System::Single ExitLerpDuration; // 0x74
		::System::Boolean PauseLevel; // 0x78
		::System::Boolean HideUIInstant; // 0x79
		::System::Single NearClip; // 0x7C
		::RPGTools::Timeline::CameraData* CameraData; // 0x80
		::System::Single OldNearClip; // 0x88
		::UnityEngine::Vector3 _Forward_k__BackingField; // 0x8C
		::System::Single _Roll_k__BackingField; // 0x98
		::System::Boolean _IsFinished_k__BackingField; // 0x9C
		::UnityEngine::Vector3 _TimelineOriginPosition_k__BackingField; // 0xA0
		::UnityEngine::Quaternion _TimelineOriginRotation_k__BackingField; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_FORWARD_OFFSET))(this);
		}

		::System::Void set_Forward(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_FORWARD_OFFSET))(this, value);
		}

		::System::Single get_Roll()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_ROLL_OFFSET))(this);
		}

		::System::Void set_Roll(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_ROLL_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_ISFINISHED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_TimelineOriginPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_TIMELINEORIGINPOSITION_OFFSET))(this);
		}

		::System::Void set_TimelineOriginPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_TIMELINEORIGINPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_TimelineOriginRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_TIMELINEORIGINROTATION_OFFSET))(this);
		}

		::System::Void set_TimelineOriginRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_TIMELINEORIGINROTATION_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}
	};
}
