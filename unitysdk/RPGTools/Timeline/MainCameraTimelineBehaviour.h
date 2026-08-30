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

#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1B59D5C0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1B59D620)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_ROLL_OFFSET UNITYSDK_OFFSET(0x1B59D600)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_TIMELINEORIGINPOSITION_OFFSET UNITYSDK_OFFSET(0x1B59D640)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_GET_TIMELINEORIGINROTATION_OFFSET UNITYSDK_OFFSET(0x1B59D680)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B59E130)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B59D9E0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B59D6A0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1B59DFB0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B59DAB0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1B59D5E0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1B59D630)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_ROLL_OFFSET UNITYSDK_OFFSET(0x1B59D610)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_TIMELINEORIGINPOSITION_OFFSET UNITYSDK_OFFSET(0x1B59D660)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR_SET_TIMELINEORIGINROTATION_OFFSET UNITYSDK_OFFSET(0x1B59D690)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B59E170)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MainCameraTimelineBehaviour_TypeDefinitionIndex = 48902;

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
	};
}
