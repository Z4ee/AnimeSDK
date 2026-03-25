#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_TransitionParams.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineComponentBase; }
namespace Cinemachine { class CinemachineVirtualCamera_CreatePipelineDelegate; }
namespace Cinemachine { class CinemachineVirtualCamera_DestroyPipelineDelegate; }
namespace Cinemachine { class CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CALCULATENEWSTATE_OFFSET UNITYSDK_OFFSET(0x119D4060)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINE_OFFSET UNITYSDK_OFFSET(0x119D5800)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYPIPELINE_OFFSET UNITYSDK_OFFSET(0x119D4D70)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x119B6980)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCINEMACHINECOMPONENT_OFFSET UNITYSDK_OFFSET(0x119D4840)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCOMPONENTOWNER_OFFSET UNITYSDK_OFFSET(0x119B9120)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCOMPONENTPIPELINE_OFFSET UNITYSDK_OFFSET(0x119D58F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x119D3690)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x119B9D80)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x119D3640)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_ONUPDATEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x119D3670)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x119D3610)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_USERISDRAGGING_OFFSET UNITYSDK_OFFSET(0x119D5F50)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x119B7CA0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_INVALIDATECOMPONENTPIPELINE_OFFSET UNITYSDK_OFFSET(0x119B9140)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x119D48D0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x119D45F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x119B4B60)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x119D4D50)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x119D61C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x119D4C80)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONWORLDWARPED_OFFSET UNITYSDK_OFFSET(0x119B4FD0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_RESET_OFFSET UNITYSDK_OFFSET(0x119D4D60)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SETFLAGSFORHIDDENCHILD_OFFSET UNITYSDK_OFFSET(0x119D5F70)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SETSTATERAWPOSITION_OFFSET UNITYSDK_OFFSET(0x119B9D90)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x119D3660)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x119D3650)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SET_ONUPDATEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x119D3680)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SET_USERISDRAGGING_OFFSET UNITYSDK_OFFSET(0x119D5F60)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_UPDATECOMPONENTPIPELINE_OFFSET UNITYSDK_OFFSET(0x119D3800)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x119D6510)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCamera_TypeDefinitionIndex = 30806;

	class CinemachineVirtualCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		static ::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate** StaticGet_CreatePipelineOverride()
		{
			return (::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineVirtualCamera_TypeDefinitionIndex)->GetStaticField(0x31DB0);
		}
		static ::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate** StaticGet_DestroyPipelineOverride()
		{
			return (::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineVirtualCamera_TypeDefinitionIndex)->GetStaticField(0x31DB8);
		}
		// static const ::System::String* PipelineName; // 0x0
		::UnityEngine::Transform* m_LookAt; // 0x68
		::UnityEngine::Transform* m_Follow; // 0x70
		::Cinemachine::LensSettings m_Lens; // 0x78
		::Cinemachine::CinemachineVirtualCameraBase_TransitionParams m_Transitions; // 0xA8
		::Cinemachine::CinemachineVirtualCameraBase_BlendHint m_LegacyBlendHint; // 0xB8
		::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate* _OnUpdateVirtualCamera_k__BackingField; // 0xC0
		::System::Boolean _UserIsDragging_k__BackingField; // 0xC8
		::Cinemachine::CameraState m_State; // 0xD0
		::Il2CppArray<::Cinemachine::CinemachineComponentBase*>* m_ComponentPipeline; // 0x1B0
		::UnityEngine::Transform* m_ComponentOwner; // 0x1B8
		::UnityEngine::Transform* mCachedLookAtTarget; // 0x1C0
		::Cinemachine::CinemachineVirtualCameraBase* mCachedLookAtTargetVcam; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA__CTOR_OFFSET))(this);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_STATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SET_LOOKAT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SET_FOLLOW_OFFSET))(this, value);
		}

		::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate* get_OnUpdateVirtualCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_ONUPDATEVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void set_OnUpdateVirtualCamera(::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SET_ONUPDATEVIRTUALCAMERA_OFFSET))(this, value);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_RESET_OFFSET))(this);
		}

		::System::Void DestroyPipeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYPIPELINE_OFFSET))(this);
		}

		::UnityEngine::Transform* CreatePipeline(::Cinemachine::CinemachineVirtualCamera* copyFrom)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINE_OFFSET))(this, copyFrom);
		}

		::System::Void InvalidateComponentPipeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_INVALIDATECOMPONENTPIPELINE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetComponentOwner()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCOMPONENTOWNER_OFFSET))(this);
		}

		::Il2CppArray<::Cinemachine::CinemachineComponentBase*>* GetComponentPipeline()
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineComponentBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCOMPONENTPIPELINE_OFFSET))(this);
		}

		::Cinemachine::CinemachineComponentBase* GetCinemachineComponent(::Cinemachine::CinemachineCore_Stage stage)
		{
			return ((::Cinemachine::CinemachineComponentBase*(*)(::PVOID, ::Cinemachine::CinemachineCore_Stage))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GETCINEMACHINECOMPONENT_OFFSET))(this, stage);
		}

		::System::Boolean get_UserIsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_GET_USERISDRAGGING_OFFSET))(this);
		}

		::System::Void set_UserIsDragging(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SET_USERISDRAGGING_OFFSET))(this, value);
		}

		::System::Void UpdateComponentPipeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_UPDATECOMPONENTPIPELINE_OFFSET))(this);
		}

		static ::System::Void SetFlagsForHiddenChild(::UnityEngine::GameObject* child)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SETFLAGSFORHIDDENCHILD_OFFSET))(child);
		}

		::Cinemachine::CameraState CalculateNewState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CALCULATENEWSTATE_OFFSET))(this, worldUp, deltaTime);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}

		::System::Void OnWorldWarped(::UnityEngine::Vector3 positionDelta, ::System::Single yawDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONWORLDWARPED_OFFSET))(this, positionDelta, yawDelta);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::System::Void SetStateRawPosition(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_SETSTATERAWPOSITION_OFFSET))(this, pos);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime);
		}
	};
}
