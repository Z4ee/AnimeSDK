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

#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0xD02D3F0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD02D450)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_ROLL_OFFSET UNITYSDK_OFFSET(0xD02D430)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_TIMELINEORIGINPOSITION_OFFSET UNITYSDK_OFFSET(0xD02D470)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_TIMELINEORIGINROTATION_OFFSET UNITYSDK_OFFSET(0xD02D4B0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD02DF60)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD02D810)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD02D4D0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD02DDE0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD02D8E0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0xD02D410)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD02D460)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_ROLL_OFFSET UNITYSDK_OFFSET(0xD02D440)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_TIMELINEORIGINPOSITION_OFFSET UNITYSDK_OFFSET(0xD02D490)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_TIMELINEORIGINROTATION_OFFSET UNITYSDK_OFFSET(0xD02D4C0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD02DFA0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD02DFD0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD02DFC0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD02DFF0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD02DFE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MainCameraTimelineBehaviour_TypeDefinitionIndex = 45718;

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

		::System::Void set_Forward(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_FORWARD_OFFSET))(this, a1);
		}

		::System::Single get_Roll()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_ROLL_OFFSET))(this);
		}

		::System::Void set_Roll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_ROLL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_TimelineOriginPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_TIMELINEORIGINPOSITION_OFFSET))(this);
		}

		::System::Void set_TimelineOriginPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_TIMELINEORIGINPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_TimelineOriginRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_TIMELINEORIGINROTATION_OFFSET))(this);
		}

		::System::Void set_TimelineOriginRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_TIMELINEORIGINROTATION_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}
	};
}
