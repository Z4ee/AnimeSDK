#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/AxisState.h"
#include "unitysdk/Cinemachine/AxisState_Recentering.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineFreeLook_Orbit.h"
#include "unitysdk/Cinemachine/CinemachineOrbitalTransposer_Heading.h"
#include "unitysdk/Cinemachine/CinemachineTransposer_BindingMode.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_TransitionParams.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class CinemachineFreeLook_CreateRigDelegate; }
namespace Cinemachine { class CinemachineFreeLook_DestroyRigDelegate; }
namespace Cinemachine { class CinemachineOrbitalTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEFREELOOK_CALCULATENEWSTATE_OFFSET UNITYSDK_OFFSET(0x1F6CE600)
#define CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGS_OFFSET UNITYSDK_OFFSET(0x1F6CEEF0)
#define CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGS_OFFSET UNITYSDK_OFFSET(0x1F6CBBF0)
#define CINEMACHINE_CINEMACHINEFREELOOK_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6CCA70)
#define CINEMACHINE_CINEMACHINEFREELOOK_GETLOCALPOSITIONFORCAMERAFROMINPUT_OFFSET UNITYSDK_OFFSET(0x1F6CECC0)
#define CINEMACHINE_CINEMACHINEFREELOOK_GETRIG_OFFSET UNITYSDK_OFFSET(0x1F6CB4F0)
#define CINEMACHINE_CINEMACHINEFREELOOK_GETYAXISCLOSESTVALUE_OFFSET UNITYSDK_OFFSET(0x1F6CCE60)
#define CINEMACHINE_CINEMACHINEFREELOOK_GETYAXISVALUE_OFFSET UNITYSDK_OFFSET(0x1F6CC8D0)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_CACHEDXAXISHEADING_OFFSET UNITYSDK_OFFSET(0x1F6D0530)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1F6CC750)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1F6CC730)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_PREVIOUSSTATEISVALID_OFFSET UNITYSDK_OFFSET(0x1F6CC510)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_RIGNAMES_OFFSET UNITYSDK_OFFSET(0x1F6CB720)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1F6CC700)
#define CINEMACHINE_CINEMACHINEFREELOOK_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1F6CE0B0)
#define CINEMACHINE_CINEMACHINEFREELOOK_INVALIDATERIGCACHE_OFFSET UNITYSDK_OFFSET(0x1F6CB4E0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x1F6CC770)
#define CINEMACHINE_CINEMACHINEFREELOOK_LOCATEEXISTINGRIGS_OFFSET UNITYSDK_OFFSET(0x1F6CF720)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F6CB8B0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F6CB7C0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1F6CC900)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1F6CBBD0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1F6CE790)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1F6CB2A0)
#define CINEMACHINE_CINEMACHINEFREELOOK_PUSHSETTINGSTORIGS_OFFSET UNITYSDK_OFFSET(0x1F6CD830)
#define CINEMACHINE_CINEMACHINEFREELOOK_RESET_OFFSET UNITYSDK_OFFSET(0x1F6CBBE0)
#define CINEMACHINE_CINEMACHINEFREELOOK_SET_CACHEDXAXISHEADING_OFFSET UNITYSDK_OFFSET(0x1F6D0540)
#define CINEMACHINE_CINEMACHINEFREELOOK_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x1F6CC760)
#define CINEMACHINE_CINEMACHINEFREELOOK_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1F6CC740)
#define CINEMACHINE_CINEMACHINEFREELOOK_SET_PREVIOUSSTATEISVALID_OFFSET UNITYSDK_OFFSET(0x1F6CC520)
#define CINEMACHINE_CINEMACHINEFREELOOK_UPDATECACHEDSPLINE_OFFSET UNITYSDK_OFFSET(0x1F6D07E0)
#define CINEMACHINE_CINEMACHINEFREELOOK_UPDATEINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x1F6CB840)
#define CINEMACHINE_CINEMACHINEFREELOOK_UPDATERIGCACHE_OFFSET UNITYSDK_OFFSET(0x1F6CB540)
#define CINEMACHINE_CINEMACHINEFREELOOK_UPDATEXAXISHEADING_OFFSET UNITYSDK_OFFSET(0x1F6D0550)
#define CINEMACHINE_CINEMACHINEFREELOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6D0CD0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFreeLook_TypeDefinitionIndex = 34667;

	class CinemachineFreeLook : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		static ::Cinemachine::CinemachineFreeLook_CreateRigDelegate** StaticGet_CreateRigOverride()
		{
			return (::Cinemachine::CinemachineFreeLook_CreateRigDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineFreeLook_TypeDefinitionIndex)->GetStaticField(0x28FA0);
		}
		static ::Cinemachine::CinemachineFreeLook_DestroyRigDelegate** StaticGet_DestroyRigOverride()
		{
			return (::Cinemachine::CinemachineFreeLook_DestroyRigDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineFreeLook_TypeDefinitionIndex)->GetStaticField(0x28FA8);
		}
		::UnityEngine::Transform* m_LookAt; // 0x68
		::UnityEngine::Transform* m_Follow; // 0x70
		::System::Boolean m_CommonLens; // 0x78
		::Cinemachine::LensSettings m_Lens; // 0x7C
		::Cinemachine::CinemachineVirtualCameraBase_TransitionParams m_Transitions; // 0xB0
		::Cinemachine::CinemachineVirtualCameraBase_BlendHint m_LegacyBlendHint; // 0xC0
		::Cinemachine::AxisState m_YAxis; // 0xC8
		::Cinemachine::AxisState_Recentering m_YAxisRecentering; // 0x130
		::Cinemachine::AxisState m_XAxis; // 0x150
		::Cinemachine::CinemachineOrbitalTransposer_Heading m_Heading; // 0x1B8
		::Cinemachine::AxisState_Recentering m_RecenterToTargetHeading; // 0x1C4
		::Cinemachine::CinemachineTransposer_BindingMode m_BindingMode; // 0x1E0
		::System::Single m_SplineCurvature; // 0x1E4
		::Il2CppArray<::Cinemachine::CinemachineFreeLook_Orbit>* m_Orbits; // 0x1E8
		::System::Single m_LegacyHeadingBias; // 0x1F0
		::System::Boolean mUseLegacyRigDefinitions; // 0x1F4
		::System::Boolean mIsDestroyed; // 0x1F5
		::Cinemachine::CameraState m_State; // 0x1F8
		::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* m_Rigs; // 0x2E0
		::Il2CppArray<::Cinemachine::CinemachineOrbitalTransposer*>* mOrbitals; // 0x2E8
		::Cinemachine::CinemachineBlend* mBlendA; // 0x2F0
		::Cinemachine::CinemachineBlend* mBlendB; // 0x2F8
		::System::Single _CachedXAxisHeading_k__BackingField; // 0x300
		::Il2CppArray<::Cinemachine::CinemachineFreeLook_Orbit>* m_CachedOrbits; // 0x308
		::System::Single m_CachedTension; // 0x310
		::Il2CppArray<::UnityEngine::Vector4>* m_CachedKnots; // 0x318
		::Il2CppArray<::UnityEngine::Vector4>* m_CachedCtrl1; // 0x320
		::Il2CppArray<::UnityEngine::Vector4>* m_CachedCtrl2; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONVALIDATE_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* GetRig(::System::Int32 i)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GETRIG_OFFSET))(this, i);
		}

		static ::Il2CppArray<::System::String*>* get_RigNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_RIGNAMES_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONENABLE_OFFSET))(this);
		}

		::System::Void UpdateInputAxisProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_UPDATEINPUTAXISPROVIDER_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_RESET_OFFSET))(this);
		}

		::System::Boolean get_PreviousStateIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_PREVIOUSSTATEISVALID_OFFSET))(this);
		}

		::System::Void set_PreviousStateIsValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_SET_PREVIOUSSTATEISVALID_OFFSET))(this, value);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_STATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_SET_LOOKAT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_SET_FOLLOW_OFFSET))(this, value);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* vcam, ::System::Boolean dominantChildOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ISLIVECHILD_OFFSET))(this, vcam, dominantChildOnly);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_INTERNALUPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime);
		}

		::System::Single GetYAxisClosestValue(::UnityEngine::Vector3 cameraPos, ::UnityEngine::Vector3 up)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GETYAXISCLOSESTVALUE_OFFSET))(this, cameraPos, up);
		}

		::System::Void InvalidateRigCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_INVALIDATERIGCACHE_OFFSET))(this);
		}

		::System::Void DestroyRigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGS_OFFSET))(this);
		}

		::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* CreateRigs(::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* copyFrom)
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGS_OFFSET))(this, copyFrom);
		}

		::System::Void UpdateRigCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_UPDATERIGCACHE_OFFSET))(this);
		}

		::System::Int32 LocateExistingRigs(::Il2CppArray<::System::String*>* rigNames, ::System::Boolean forceOrbital)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_LOCATEEXISTINGRIGS_OFFSET))(this, rigNames, forceOrbital);
		}

		::System::Single get_CachedXAxisHeading()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_CACHEDXAXISHEADING_OFFSET))(this);
		}

		::System::Void set_CachedXAxisHeading(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_SET_CACHEDXAXISHEADING_OFFSET))(this, value);
		}

		::System::Single UpdateXAxisHeading(::Cinemachine::CinemachineOrbitalTransposer* orbital, ::System::Single deltaTime, ::UnityEngine::Vector3 up)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_UPDATEXAXISHEADING_OFFSET))(this, orbital, deltaTime, up);
		}

		::System::Void PushSettingsToRigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_PUSHSETTINGSTORIGS_OFFSET))(this);
		}

		::System::Single GetYAxisValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GETYAXISVALUE_OFFSET))(this);
		}

		::Cinemachine::CameraState CalculateNewState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CALCULATENEWSTATE_OFFSET))(this, worldUp, deltaTime);
		}

		::UnityEngine::Vector3 GetLocalPositionForCameraFromInput(::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GETLOCALPOSITIONFORCAMERAFROMINPUT_OFFSET))(this, t);
		}

		::System::Void UpdateCachedSpline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_UPDATECACHEDSPLINE_OFFSET))(this);
		}
	};
}
