#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_CALCULATENEWSTATE_OFFSET UNITYSDK_OFFSET(0x1FB2BC80)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_BLEND_OFFSET UNITYSDK_OFFSET(0x1FB2BAD0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1FB2BB30)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1FB2BBD0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1FB2BC30)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1FB2BBB0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FB2BAF0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_PARENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1FB2BC50)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1FB2BB90)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1FB2BBF0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1FB2BC20)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1FB2BD10)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x1FB2BC60)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1FB2BD30)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1FB2BD20)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_BLEND_OFFSET UNITYSDK_OFFSET(0x1FB2BAE0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1FB2BBE0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1FB2BBC0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1FB2BBA0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1FB2BC10)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1FB2BCA0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB2BAC0)

namespace Cinemachine
{
	inline static constexpr unsigned int BlendSourceVirtualCamera_TypeDefinitionIndex = 34734;

	class BlendSourceVirtualCamera : public ::System::Object
	{
	public:
		::Cinemachine::CameraState _State_k__BackingField; // 0x10
		::UnityEngine::Transform* _Follow_k__BackingField; // 0xF8
		::Cinemachine::CinemachineBlend* _Blend_k__BackingField; // 0x100
		::UnityEngine::Transform* _LookAt_k__BackingField; // 0x108
		::System::Int32 _Priority_k__BackingField; // 0x110

		::System::Void _ctor(::Cinemachine::CinemachineBlend* blend)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlend*))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA__CTOR_OFFSET))(this, blend);
		}

		::Cinemachine::CinemachineBlend* get_Blend()
		{
			return ((::Cinemachine::CinemachineBlend*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_BLEND_OFFSET))(this);
		}

		::System::Void set_Blend(::Cinemachine::CinemachineBlend* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlend*))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_BLEND_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_PRIORITY_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_LOOKAT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_FOLLOW_OFFSET))(this, value);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Cinemachine::CameraState value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_STATE_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_VirtualCameraGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::ICinemachineCamera* get_ParentCamera()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_PARENTCAMERA_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* vcam, ::System::Boolean dominantChildOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ISLIVECHILD_OFFSET))(this, vcam, dominantChildOnly);
		}

		::Cinemachine::CameraState CalculateNewState(::System::Single deltaTime)
		{
			return ((::Cinemachine::CameraState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_CALCULATENEWSTATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_UPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}
	};
}
