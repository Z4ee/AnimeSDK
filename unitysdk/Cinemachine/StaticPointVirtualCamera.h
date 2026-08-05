#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1FA78CE0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1FA78D60)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1FA78DC0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1FA78D40)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FA78CC0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_PARENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1FA78DD0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1FA78D20)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1FA78D80)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1FA78DB0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1FA78E00)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x1FA78DE0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1FA78E20)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1FA78E10)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1FA78CB0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1FA78D70)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1FA78D50)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1FA78CD0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1FA78D30)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1FA78DA0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA_UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1FA78DF0)
#define CINEMACHINE_STATICPOINTVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA78C80)

namespace Cinemachine
{
	inline static constexpr unsigned int StaticPointVirtualCamera_TypeDefinitionIndex = 34733;

	class StaticPointVirtualCamera : public ::System::Object
	{
	public:
		::Cinemachine::CameraState _State_k__BackingField; // 0x10
		::UnityEngine::Transform* _LookAt_k__BackingField; // 0xF8
		::System::String* _Name_k__BackingField; // 0x100
		::UnityEngine::Transform* _Follow_k__BackingField; // 0x108
		::System::Int32 _Priority_k__BackingField; // 0x110

		::System::Void _ctor(::Cinemachine::CameraState state, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState, ::System::String*))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA__CTOR_OFFSET))(this, state, name);
		}

		::System::Void SetState(::Cinemachine::CameraState state)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SETSTATE_OFFSET))(this, state);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_PRIORITY_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_LOOKAT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_FOLLOW_OFFSET))(this, value);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Cinemachine::CameraState value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_SET_STATE_OFFSET))(this, value);
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

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* vcam, ::System::Boolean dominantChildOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_ISLIVECHILD_OFFSET))(this, vcam, dominantChildOnly);
		}

		::System::Void UpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_UPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_STATICPOINTVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}
	};
}
