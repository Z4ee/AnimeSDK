#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPGTools::Timeline { class VirtualCameraSampleAnimationConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD072BD0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_DIRECTORGO_OFFSET UNITYSDK_OFFSET(0xD072C60)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0xD072C40)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0xD072C20)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_OFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0xD072BF0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xD0731D0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD073590)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_METHOD_2_DFBAD309D61905C2_OFFSET UNITYSDK_OFFSET(0xD072F90)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD073400)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD0734E0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD072C80)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD072BE0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_DIRECTORGO_OFFSET UNITYSDK_OFFSET(0xD072C70)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0xD072C50)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0xD072C30)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_OFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0xD072C10)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD073600)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD073620)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD073630)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD073610)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VirtualCameraSampleAnimationBehaviour_TypeDefinitionIndex = 45150;

	class VirtualCameraSampleAnimationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		// static const ::System::String* _SAMPLE_CAM_NAME; // 0x0
		::RPGTools::Timeline::VirtualCameraSampleAnimationConfig* _Config_k__BackingField; // 0x10
		::UnityEngine::Vector3 _OffsetPosition_k__BackingField; // 0x18
		::System::Single _NearClipPlane_k__BackingField; // 0x24
		::System::Single _FarClipPlane_k__BackingField; // 0x28
		::UnityEngine::GameObject* _DirectorGo_k__BackingField; // 0x30
		::Cinemachine::CinemachineVirtualCamera* _TargetVCam; // 0x38
		::UnityEngine::Camera* _SampleCam; // 0x40
		::System::Boolean _FirstFrame; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::VirtualCameraSampleAnimationConfig* get_Config()
		{
			return ((::RPGTools::Timeline::VirtualCameraSampleAnimationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPGTools::Timeline::VirtualCameraSampleAnimationConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VirtualCameraSampleAnimationConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_CONFIG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_OffsetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_OFFSETPOSITION_OFFSET))(this);
		}

		::System::Void set_OffsetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_OFFSETPOSITION_OFFSET))(this, a1);
		}

		::System::Single get_NearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_NearClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_NEARCLIPPLANE_OFFSET))(this, a1);
		}

		::System::Single get_FarClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_FARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_FarClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_FARCLIPPLANE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_DirectorGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_GET_DIRECTORGO_OFFSET))(this);
		}

		::System::Void set_DirectorGo(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_SET_DIRECTORGO_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_DFBAD309D61905C2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_METHOD_2_DFBAD309D61905C2_OFFSET))(this, a1);
		}

		::System::Void Method_2_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::System::Void Method_2_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR_METHOD_2_9681042564541CD6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}
	};
}
