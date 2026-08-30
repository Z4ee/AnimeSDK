#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineCore_UpdateFilter.h"
#include "unitysdk/Cinemachine/UpdateTracker_UpdateClock.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineBrain_BrainEvent; }
namespace Cinemachine { class CinemachineCore_AxisInputDelegate; }
namespace Cinemachine { class CinemachineCore_GetBlendOverrideDelegate; }
namespace Cinemachine { class CinemachineCore_UpdateStatus; }
namespace Cinemachine { class CinemachineMixingCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINECORE_ADDACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x18C40060)
#define CINEMACHINE_CINEMACHINECORE_ADDACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x18C52570)
#define CINEMACHINE_CINEMACHINECORE_CAMERADESTROYED_OFFSET UNITYSDK_OFFSET(0x18C52660)
#define CINEMACHINE_CINEMACHINECORE_CAMERADISABLED_OFFSET UNITYSDK_OFFSET(0x18C52A80)
#define CINEMACHINE_CINEMACHINECORE_CAMERAENABLED_OFFSET UNITYSDK_OFFSET(0x18C52720)
#define CINEMACHINE_CINEMACHINECORE_DELAYMIXINGVCAMUPDATEORDER_OFFSET UNITYSDK_OFFSET(0x18C52B50)
#define CINEMACHINE_CINEMACHINECORE_FINDPOTENTIALTARGETBRAIN_OFFSET UNITYSDK_OFFSET(0x18C53610)
#define CINEMACHINE_CINEMACHINECORE_GENERATECAMERAACTIVATIONEVENT_OFFSET UNITYSDK_OFFSET(0x18C3E490)
#define CINEMACHINE_CINEMACHINECORE_GENERATECAMERACUTEVENT_OFFSET UNITYSDK_OFFSET(0x18C3E560)
#define CINEMACHINE_CINEMACHINECORE_GETACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x18C52520)
#define CINEMACHINE_CINEMACHINECORE_GETUPDATETARGET_OFFSET UNITYSDK_OFFSET(0x18C53370)
#define CINEMACHINE_CINEMACHINECORE_GETVCAMUPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x18C53580)
#define CINEMACHINE_CINEMACHINECORE_GETVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x18C43E60)
#define CINEMACHINE_CINEMACHINECORE_GET_BRAINCOUNT_OFFSET UNITYSDK_OFFSET(0x18C52500)
#define CINEMACHINE_CINEMACHINECORE_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x18C33B60)
#define CINEMACHINE_CINEMACHINECORE_GET_CURRENTUPDATEFILTER_OFFSET UNITYSDK_OFFSET(0x18C53560)
#define CINEMACHINE_CINEMACHINECORE_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x18C3F900)
#define CINEMACHINE_CINEMACHINECORE_GET_FIXEDFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x18C52E70)
#define CINEMACHINE_CINEMACHINECORE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18C3E370)
#define CINEMACHINE_CINEMACHINECORE_GET_VIRTUALCAMERACOUNT_OFFSET UNITYSDK_OFFSET(0x18C43E40)
#define CINEMACHINE_CINEMACHINECORE_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x18C534C0)
#define CINEMACHINE_CINEMACHINECORE_ISLIVE_OFFSET UNITYSDK_OFFSET(0x18C3F850)
#define CINEMACHINE_CINEMACHINECORE_REMOVEACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x18C403F0)
#define CINEMACHINE_CINEMACHINECORE_REMOVEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x18C52630)
#define CINEMACHINE_CINEMACHINECORE_REMOVEUPDATESTATUSCACHE_OFFSET UNITYSDK_OFFSET(0x18C42960)
#define CINEMACHINE_CINEMACHINECORE_SET_CURRENTUPDATEFILTER_OFFSET UNITYSDK_OFFSET(0x18C53570)
#define CINEMACHINE_CINEMACHINECORE_SET_FIXEDFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x18C52EA0)
#define CINEMACHINE_CINEMACHINECORE_UPDATEALLACTIVEVIRTUALCAMERAS_OFFSET UNITYSDK_OFFSET(0x18C42A00)
#define CINEMACHINE_CINEMACHINECORE_UPDATEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x18C52ED0)
#define CINEMACHINE_CINEMACHINECORE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C53830)
#define CINEMACHINE_CINEMACHINECORE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C52480)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCore_TypeDefinitionIndex = 38513;

	class CinemachineCore : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineBrain_BrainEvent** StaticGet_CameraUpdatedEvent()
		{
			return (::Cinemachine::CinemachineBrain_BrainEvent**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xE10);
		}
		static ::Cinemachine::CinemachineCore** StaticGet_sInstance()
		{
			return (::Cinemachine::CinemachineCore**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xE18);
		}
		static ::Cinemachine::CinemachineCore_AxisInputDelegate** StaticGet_GetInputAxis()
		{
			return (::Cinemachine::CinemachineCore_AxisInputDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xE20);
		}
		static ::Cinemachine::CinemachineBrain_BrainEvent** StaticGet_CameraCutEvent()
		{
			return (::Cinemachine::CinemachineBrain_BrainEvent**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xE28);
		}
		static ::Cinemachine::CinemachineCore_GetBlendOverrideDelegate** StaticGet_GetBlendOverride()
		{
			return (::Cinemachine::CinemachineCore_GetBlendOverrideDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xE30);
		}
		static ::System::String** StaticGet_kVersionString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xE38);
		}
		static ::System::Int32* StaticGet__FixedFrameCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x750);
		}
		static ::System::Single* StaticGet_CurrentTimeOverride()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x754);
		}
		static ::System::Single* StaticGet_UniformDeltaTimeOverride()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x758);
		}
		static ::System::Boolean* StaticGet_sShowHiddenObjects()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x75C);
		}
		static ::System::Boolean* StaticGet_DontSkipWhenCameraCullingMaskAll()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x75D);
		}
		static ::System::Single* StaticGet_mLastUpdateTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x760);
		}
		static ::System::Int32* StaticGet_kStreamingVersion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x764);
		}
		::Cinemachine::CinemachineVirtualCameraBase* mRoundRobinVcamLastFrame; // 0x10
		::System::Collections::Generic::Dictionary_2<::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_UpdateStatus*>* mUpdateStatus; // 0x18
		::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>* mActiveCameras; // 0x20
		::System::Collections::Generic::List_1<::Cinemachine::CinemachineBrain*>* mActiveBrains; // 0x28
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>*>* mAllCameras; // 0x30
		::Cinemachine::CinemachineCore_UpdateFilter _CurrentUpdateFilter_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE__CCTOR_OFFSET))();
		}

		static ::Cinemachine::CinemachineCore* get_Instance()
		{
			return ((::Cinemachine::CinemachineCore*(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_DELTATIME_OFFSET))();
		}

		static ::System::Single get_CurrentTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_CURRENTTIME_OFFSET))();
		}

		::System::Int32 get_BrainCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_BRAINCOUNT_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* GetActiveBrain(::System::Int32 a1)
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETACTIVEBRAIN_OFFSET))(this, a1);
		}

		::System::Void AddActiveBrain(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ADDACTIVEBRAIN_OFFSET))(this, a1);
		}

		::System::Void RemoveActiveBrain(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_REMOVEACTIVEBRAIN_OFFSET))(this, a1);
		}

		::System::Int32 get_VirtualCameraCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_VIRTUALCAMERACOUNT_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCameraBase* GetVirtualCamera(::System::Int32 a1)
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETVIRTUALCAMERA_OFFSET))(this, a1);
		}

		::System::Void AddActiveCamera(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ADDACTIVECAMERA_OFFSET))(this, a1);
		}

		::System::Void RemoveActiveCamera(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_REMOVEACTIVECAMERA_OFFSET))(this, a1);
		}

		::System::Void CameraDestroyed(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CAMERADESTROYED_OFFSET))(this, a1);
		}

		::System::Void CameraEnabled(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CAMERAENABLED_OFFSET))(this, a1);
		}

		::System::Void CameraDisabled(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CAMERADISABLED_OFFSET))(this, a1);
		}

		::System::Void DelayMixingVCamUpdateOrder(::Cinemachine::CinemachineMixingCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineMixingCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_DELAYMIXINGVCAMUPDATEORDER_OFFSET))(this, a1);
		}

		static ::System::Int32 get_FixedFrameCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_FIXEDFRAMECOUNT_OFFSET))();
		}

		static ::System::Void set_FixedFrameCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_SET_FIXEDFRAMECOUNT_OFFSET))(a1);
		}

		::System::Void UpdateAllActiveVirtualCameras(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_UPDATEALLACTIVEVIRTUALCAMERAS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateVirtualCamera(::Cinemachine::CinemachineVirtualCameraBase* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_UPDATEVIRTUALCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveUpdateStatusCache(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_REMOVEUPDATESTATUSCACHE_OFFSET))(this, a1);
		}

		static ::System::Void InitializeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_INITIALIZEMODULE_OFFSET))();
		}

		::Cinemachine::CinemachineCore_UpdateFilter get_CurrentUpdateFilter()
		{
			return ((::Cinemachine::CinemachineCore_UpdateFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_CURRENTUPDATEFILTER_OFFSET))(this);
		}

		::System::Void set_CurrentUpdateFilter(::Cinemachine::CinemachineCore_UpdateFilter a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineCore_UpdateFilter))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_SET_CURRENTUPDATEFILTER_OFFSET))(this, a1);
		}

		static ::UnityEngine::Transform* GetUpdateTarget(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::UnityEngine::Transform*(*)(::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETUPDATETARGET_OFFSET))(a1);
		}

		::Cinemachine::UpdateTracker_UpdateClock GetVcamUpdateStatus(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::Cinemachine::UpdateTracker_UpdateClock(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETVCAMUPDATESTATUS_OFFSET))(this, a1);
		}

		::System::Boolean IsLive(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ISLIVE_OFFSET))(this, a1);
		}

		::System::Void GenerateCameraActivationEvent(::Cinemachine::ICinemachineCamera* a1, ::Cinemachine::ICinemachineCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GENERATECAMERAACTIVATIONEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void GenerateCameraCutEvent(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GENERATECAMERACUTEVENT_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineBrain* FindPotentialTargetBrain(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_FINDPOTENTIALTARGETBRAIN_OFFSET))(this, a1);
		}
	};
}
