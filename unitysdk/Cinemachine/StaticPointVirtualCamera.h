#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1EF0B620)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1EF0B670)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EF0B6D0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1EF0B650)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EF0B600)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_PARENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1EF0B6E0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1EF0B630)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1EF0B690)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EF0B6C0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1EF0B710)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x1EF0B6F0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1EF0B730)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1EF0B720)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1EF0B5F0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1EF0B680)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1EF0B660)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1EF0B610)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1EF0B640)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1EF0B6B0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1EF0B700)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF09260)

namespace Cinemachine
{
	inline static constexpr unsigned int StaticPointVirtualCamera_TypeDefinitionIndex = 38508;

	class StaticPointVirtualCamera : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::UnityEngine::Transform* _Follow_k__BackingField; // 0x18
		::UnityEngine::Transform* _LookAt_k__BackingField; // 0x20
		::Cinemachine::CameraState _State_k__BackingField; // 0x28
		::System::Int32 _Priority_k__BackingField; // 0x108

		::System::Void _ctor(::Cinemachine::CameraState a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState, ::System::String*))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetState(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SETSTATE_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_PRIORITY_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_LOOKAT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_FOLLOW_OFFSET))(this, a1);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_STATE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_VirtualCameraGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::ICinemachineCamera* get_ParentCamera()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_PARENTCAMERA_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_ISLIVECHILD_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_UPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}
	};
}
