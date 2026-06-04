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

#define CINEMACHINE_CINEMACHINECORE_ADDACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x14628F40)
#define CINEMACHINE_CINEMACHINECORE_ADDACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x1463A160)
#define CINEMACHINE_CINEMACHINECORE_CAMERADESTROYED_OFFSET UNITYSDK_OFFSET(0x1463A250)
#define CINEMACHINE_CINEMACHINECORE_CAMERADISABLED_OFFSET UNITYSDK_OFFSET(0x1463A690)
#define CINEMACHINE_CINEMACHINECORE_CAMERAENABLED_OFFSET UNITYSDK_OFFSET(0x1463A390)
#define CINEMACHINE_CINEMACHINECORE_DELAYMIXINGVCAMUPDATEORDER_OFFSET UNITYSDK_OFFSET(0x1463A760)
#define CINEMACHINE_CINEMACHINECORE_FINDPOTENTIALTARGETBRAIN_OFFSET UNITYSDK_OFFSET(0x1463B0F0)
#define CINEMACHINE_CINEMACHINECORE_GENERATECAMERAACTIVATIONEVENT_OFFSET UNITYSDK_OFFSET(0x14627480)
#define CINEMACHINE_CINEMACHINECORE_GENERATECAMERACUTEVENT_OFFSET UNITYSDK_OFFSET(0x14627550)
#define CINEMACHINE_CINEMACHINECORE_GETACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x1463A110)
#define CINEMACHINE_CINEMACHINECORE_GETUPDATETARGET_OFFSET UNITYSDK_OFFSET(0x1463AF00)
#define CINEMACHINE_CINEMACHINECORE_GETVCAMUPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x1463B060)
#define CINEMACHINE_CINEMACHINECORE_GETVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1462CF20)
#define CINEMACHINE_CINEMACHINECORE_GET_BRAINCOUNT_OFFSET UNITYSDK_OFFSET(0x1463A0F0)
#define CINEMACHINE_CINEMACHINECORE_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1461D8D0)
#define CINEMACHINE_CINEMACHINECORE_GET_CURRENTUPDATEFILTER_OFFSET UNITYSDK_OFFSET(0x1463B040)
#define CINEMACHINE_CINEMACHINECORE_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x146287E0)
#define CINEMACHINE_CINEMACHINECORE_GET_FIXEDFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1463AA20)
#define CINEMACHINE_CINEMACHINECORE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x14627360)
#define CINEMACHINE_CINEMACHINECORE_GET_VIRTUALCAMERACOUNT_OFFSET UNITYSDK_OFFSET(0x1462CF00)
#define CINEMACHINE_CINEMACHINECORE_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x1463AFA0)
#define CINEMACHINE_CINEMACHINECORE_ISLIVE_OFFSET UNITYSDK_OFFSET(0x14628730)
#define CINEMACHINE_CINEMACHINECORE_REMOVEACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x146292D0)
#define CINEMACHINE_CINEMACHINECORE_REMOVEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x1463A220)
#define CINEMACHINE_CINEMACHINECORE_SET_CURRENTUPDATEFILTER_OFFSET UNITYSDK_OFFSET(0x1463B050)
#define CINEMACHINE_CINEMACHINECORE_SET_FIXEDFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1463AA50)
#define CINEMACHINE_CINEMACHINECORE_UPDATEALLACTIVEVIRTUALCAMERAS_OFFSET UNITYSDK_OFFSET(0x1462BC40)
#define CINEMACHINE_CINEMACHINECORE_UPDATEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1463AA80)
#define CINEMACHINE_CINEMACHINECORE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1463B310)
#define CINEMACHINE_CINEMACHINECORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1463A070)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCore_TypeDefinitionIndex = 36872;

	class CinemachineCore : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineBrain_BrainEvent** StaticGet_CameraCutEvent()
		{
			return (::Cinemachine::CinemachineBrain_BrainEvent**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xF70);
		}
		static ::Cinemachine::CinemachineBrain_BrainEvent** StaticGet_CameraUpdatedEvent()
		{
			return (::Cinemachine::CinemachineBrain_BrainEvent**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xF78);
		}
		static ::Cinemachine::CinemachineCore_AxisInputDelegate** StaticGet_GetInputAxis()
		{
			return (::Cinemachine::CinemachineCore_AxisInputDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xF80);
		}
		static ::Cinemachine::CinemachineCore** StaticGet_sInstance()
		{
			return (::Cinemachine::CinemachineCore**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xF88);
		}
		static ::System::String** StaticGet_kVersionString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xF90);
		}
		static ::Cinemachine::CinemachineCore_GetBlendOverrideDelegate** StaticGet_GetBlendOverride()
		{
			return (::Cinemachine::CinemachineCore_GetBlendOverrideDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xF98);
		}
		static ::System::Single* StaticGet_mLastUpdateTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x8D0);
		}
		static ::System::Int32* StaticGet_kStreamingVersion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x8D4);
		}
		static ::System::Single* StaticGet_CurrentTimeOverride()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x8D8);
		}
		static ::System::Boolean* StaticGet_DontSkipWhenCameraCullingMaskAll()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x8DC);
		}
		static ::System::Boolean* StaticGet_sShowHiddenObjects()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x8DD);
		}
		static ::System::Int32* StaticGet__FixedFrameCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x8E0);
		}
		static ::System::Single* StaticGet_UniformDeltaTimeOverride()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x8E4);
		}
		::System::Collections::Generic::Dictionary_2<::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_UpdateStatus*>* mUpdateStatus; // 0x10
		::System::Collections::Generic::List_1<::Cinemachine::CinemachineBrain*>* mActiveBrains; // 0x18
		::Cinemachine::CinemachineVirtualCameraBase* mRoundRobinVcamLastFrame; // 0x20
		::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>* mActiveCameras; // 0x28
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
