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

#define CINEMACHINE_CINEMACHINEFREELOOK_CALCULATENEWSTATE_OFFSET UNITYSDK_OFFSET(0x18C5D970)
#define CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGS_OFFSET UNITYSDK_OFFSET(0x18C5E9F0)
#define CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGS_OFFSET UNITYSDK_OFFSET(0x18C5A8C0)
#define CINEMACHINE_CINEMACHINEFREELOOK_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x18C5C000)
#define CINEMACHINE_CINEMACHINEFREELOOK_FORCEPUSHSETTINGSTORIGS_OFFSET UNITYSDK_OFFSET(0x18C59EE0)
#define CINEMACHINE_CINEMACHINEFREELOOK_GETLOCALPOSITIONFORCAMERAFROMINPUT_OFFSET UNITYSDK_OFFSET(0x18C5E7F0)
#define CINEMACHINE_CINEMACHINEFREELOOK_GETRIG_OFFSET UNITYSDK_OFFSET(0x18C59B30)
#define CINEMACHINE_CINEMACHINEFREELOOK_GETYAXISCLOSESTVALUE_OFFSET UNITYSDK_OFFSET(0x18C5C300)
#define CINEMACHINE_CINEMACHINEFREELOOK_GETYAXISVALUE_OFFSET UNITYSDK_OFFSET(0x18C5B3D0)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_CACHEDXAXISHEADING_OFFSET UNITYSDK_OFFSET(0x18C5F9D0)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x18C5B2A0)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x18C5B280)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_PREVIOUSSTATEISVALID_OFFSET UNITYSDK_OFFSET(0x18C5B1C0)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_RIGNAMES_OFFSET UNITYSDK_OFFSET(0x18C5A620)
#define CINEMACHINE_CINEMACHINEFREELOOK_GET_STATE_OFFSET UNITYSDK_OFFSET(0x18C5B250)
#define CINEMACHINE_CINEMACHINEFREELOOK_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x18C5D490)
#define CINEMACHINE_CINEMACHINEFREELOOK_INVALIDATERIGCACHE_OFFSET UNITYSDK_OFFSET(0x18C59B20)
#define CINEMACHINE_CINEMACHINEFREELOOK_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x18C5B2C0)
#define CINEMACHINE_CINEMACHINEFREELOOK_LOCATEEXISTINGRIGS_OFFSET UNITYSDK_OFFSET(0x18C5EFD0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18C5A770)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18C5A680)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x18C5B400)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x18C5A8A0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x18C5DAE0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x18C59930)
#define CINEMACHINE_CINEMACHINEFREELOOK_ONWORLDWARPED_OFFSET UNITYSDK_OFFSET(0x18C5B710)
#define CINEMACHINE_CINEMACHINEFREELOOK_PUSHSETTINGSTORIGS_OFFSET UNITYSDK_OFFSET(0x18C59F50)
#define CINEMACHINE_CINEMACHINEFREELOOK_RESET_OFFSET UNITYSDK_OFFSET(0x18C5A8B0)
#define CINEMACHINE_CINEMACHINEFREELOOK_SET_CACHEDXAXISHEADING_OFFSET UNITYSDK_OFFSET(0x18C5F9E0)
#define CINEMACHINE_CINEMACHINEFREELOOK_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x18C5B2B0)
#define CINEMACHINE_CINEMACHINEFREELOOK_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x18C5B290)
#define CINEMACHINE_CINEMACHINEFREELOOK_SET_PREVIOUSSTATEISVALID_OFFSET UNITYSDK_OFFSET(0x18C5B1D0)
#define CINEMACHINE_CINEMACHINEFREELOOK_UPDATECACHEDSPLINE_OFFSET UNITYSDK_OFFSET(0x18C5FC60)
#define CINEMACHINE_CINEMACHINEFREELOOK_UPDATEINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x18C5A700)
#define CINEMACHINE_CINEMACHINEFREELOOK_UPDATERIGCACHE_OFFSET UNITYSDK_OFFSET(0x18C59B80)
#define CINEMACHINE_CINEMACHINEFREELOOK_UPDATEXAXISHEADING_OFFSET UNITYSDK_OFFSET(0x18C5A4A0)
#define CINEMACHINE_CINEMACHINEFREELOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C60080)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFreeLook_TypeDefinitionIndex = 38441;

	class CinemachineFreeLook : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		static ::Cinemachine::CinemachineFreeLook_DestroyRigDelegate** StaticGet_DestroyRigOverride()
		{
			return (::Cinemachine::CinemachineFreeLook_DestroyRigDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineFreeLook_TypeDefinitionIndex)->GetStaticField(0x56820);
		}
		static ::Cinemachine::CinemachineFreeLook_CreateRigDelegate** StaticGet_CreateRigOverride()
		{
			return (::Cinemachine::CinemachineFreeLook_CreateRigDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineFreeLook_TypeDefinitionIndex)->GetStaticField(0x56828);
		}
		::UnityEngine::Transform* m_LookAt; // 0x68
		::UnityEngine::Transform* m_Follow; // 0x70
		::System::Boolean m_CommonLens; // 0x78
		::Cinemachine::LensSettings m_Lens; // 0x7C
		::Cinemachine::CinemachineVirtualCameraBase_TransitionParams m_Transitions; // 0xA8
		::Cinemachine::CinemachineVirtualCameraBase_BlendHint m_LegacyBlendHint; // 0xB8
		::Cinemachine::AxisState m_YAxis; // 0xC0
		::Cinemachine::AxisState_Recentering m_YAxisRecentering; // 0x138
		::Cinemachine::AxisState m_XAxis; // 0x158
		::Cinemachine::CinemachineOrbitalTransposer_Heading m_Heading; // 0x1D0
		::Cinemachine::AxisState_Recentering m_RecenterToTargetHeading; // 0x1DC
		::Cinemachine::CinemachineTransposer_BindingMode m_BindingMode; // 0x1F8
		::System::Single m_SplineCurvature; // 0x1FC
		::Il2CppArray<::Cinemachine::CinemachineFreeLook_Orbit>* m_Orbits; // 0x200
		::System::Single m_LegacyHeadingBias; // 0x208
		::System::Boolean mUseLegacyRigDefinitions; // 0x20C
		::System::Boolean mIsDestroyed; // 0x20D
		::Cinemachine::CameraState m_State; // 0x210
		::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* m_Rigs; // 0x2F0
		::Il2CppArray<::Cinemachine::CinemachineOrbitalTransposer*>* mOrbitals; // 0x2F8
		::Cinemachine::CinemachineBlend* mBlendA; // 0x300
		::Cinemachine::CinemachineBlend* mBlendB; // 0x308
		::System::Single _CachedXAxisHeading_k__BackingField; // 0x310
		::Il2CppArray<::Cinemachine::CinemachineFreeLook_Orbit>* m_CachedOrbits; // 0x318
		::System::Single m_CachedTension; // 0x320
		::Il2CppArray<::UnityEngine::Vector4>* m_CachedKnots; // 0x328
		::Il2CppArray<::UnityEngine::Vector4>* m_CachedCtrl1; // 0x330
		::Il2CppArray<::UnityEngine::Vector4>* m_CachedCtrl2; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONVALIDATE_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* GetRig(::System::Int32 a1)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GETRIG_OFFSET))(this, a1);
		}

		::System::Void ForcePushSettingsToRigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_FORCEPUSHSETTINGSTORIGS_OFFSET))(this);
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

		::System::Void set_PreviousStateIsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_SET_PREVIOUSSTATEISVALID_OFFSET))(this, a1);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_STATE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_SET_LOOKAT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_SET_FOLLOW_OFFSET))(this, a1);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ISLIVECHILD_OFFSET))(this, a1, a2);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void OnWorldWarped(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONWORLDWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_INTERNALUPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetYAxisClosestValue(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GETYAXISCLOSESTVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void InvalidateRigCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_INVALIDATERIGCACHE_OFFSET))(this);
		}

		::System::Void DestroyRigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGS_OFFSET))(this);
		}

		::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* CreateRigs(::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* a1)
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CREATERIGS_OFFSET))(this, a1);
		}

		::System::Void UpdateRigCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_UPDATERIGCACHE_OFFSET))(this);
		}

		::System::Int32 LocateExistingRigs(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_LOCATEEXISTINGRIGS_OFFSET))(this, a1, a2);
		}

		::System::Single get_CachedXAxisHeading()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GET_CACHEDXAXISHEADING_OFFSET))(this);
		}

		::System::Void set_CachedXAxisHeading(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_SET_CACHEDXAXISHEADING_OFFSET))(this, a1);
		}

		::System::Single UpdateXAxisHeading(::Cinemachine::CinemachineOrbitalTransposer* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_UPDATEXAXISHEADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PushSettingsToRigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_PUSHSETTINGSTORIGS_OFFSET))(this);
		}

		::System::Single GetYAxisValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GETYAXISVALUE_OFFSET))(this);
		}

		::Cinemachine::CameraState CalculateNewState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_CALCULATENEWSTATE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetLocalPositionForCameraFromInput(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_GETLOCALPOSITIONFORCAMERAFROMINPUT_OFFSET))(this, a1);
		}

		::System::Void UpdateCachedSpline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_UPDATECACHEDSPLINE_OFFSET))(this);
		}
	};
}
