#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineTransposer_AngularDampingMode.h"
#include "unitysdk/Cinemachine/CinemachineTransposer_BindingMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINETRANSPOSER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1646E300)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x1647E1D0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GETOFFSETFORMINIMUMTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0x164708E0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GETREFERENCEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1646C710)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GETTARGETCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1647E900)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_ANGULARDAMPING_OFFSET UNITYSDK_OFFSET(0x1647E2D0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_DAMPING_OFFSET UNITYSDK_OFFSET(0x1647E280)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_EFFECTIVEOFFSET_OFFSET UNITYSDK_OFFSET(0x1646E8B0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_HIDEOFFSETININSPECTOR_OFFSET UNITYSDK_OFFSET(0x1647E1A0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1646F8B0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1647E1C0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_INITPREVFRAMESTATEINFO_OFFSET UNITYSDK_OFFSET(0x1646F5A0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1647E380)
#define CINEMACHINE_CINEMACHINETRANSPOSER_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1646D970)
#define CINEMACHINE_CINEMACHINETRANSPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1646C690)
#define CINEMACHINE_CINEMACHINETRANSPOSER_ONWORLDWARPED_OFFSET UNITYSDK_OFFSET(0x1646DE20)
#define CINEMACHINE_CINEMACHINETRANSPOSER_SET_HIDEOFFSETININSPECTOR_OFFSET UNITYSDK_OFFSET(0x1647E1B0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_TRACKTARGET_OFFSET UNITYSDK_OFFSET(0x1646FA00)
#define CINEMACHINE_CINEMACHINETRANSPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x16471040)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTransposer_TypeDefinitionIndex = 38495;

	class CinemachineTransposer : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::Cinemachine::CinemachineTransposer_BindingMode m_BindingMode; // 0x50
		::UnityEngine::Vector3 m_FollowOffset; // 0x54
		::System::Single m_XDamping; // 0x60
		::System::Single m_YDamping; // 0x64
		::System::Single m_ZDamping; // 0x68
		::Cinemachine::CinemachineTransposer_AngularDampingMode m_AngularDampingMode; // 0x6C
		::System::Single m_PitchDamping; // 0x70
		::System::Single m_YawDamping; // 0x74
		::System::Single m_RollDamping; // 0x78
		::System::Single m_AngularDamping; // 0x7C
		::System::Boolean _HideOffsetInInspector_k__BackingField; // 0x80
		::UnityEngine::Vector3 m_PreviousTargetPosition; // 0x84
		::UnityEngine::Quaternion m_PreviousReferenceOrientation; // 0x90
		::UnityEngine::Quaternion m_targetOrientationOnAssign; // 0xA0
		::UnityEngine::Vector3 m_PreviousOffset; // 0xB0
		::UnityEngine::Transform* m_previousTarget; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_ONVALIDATE_OFFSET))(this);
		}

		::System::Boolean get_HideOffsetInInspector()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_HIDEOFFSETININSPECTOR_OFFSET))(this);
		}

		::System::Void set_HideOffsetInInspector(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_SET_HIDEOFFSETININSPECTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_EffectiveOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_EFFECTIVEOFFSET_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::CinemachineCore_Stage get_Stage()
		{
			return ((::Cinemachine::CinemachineCore_Stage(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_STAGE_OFFSET))(this);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_MUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void OnWorldWarped(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_ONWORLDWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void InitPrevFrameStateInfo(::Cinemachine::CameraState& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_INITPREVFRAMESTATEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void TrackTarget(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_TRACKTARGET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 GetOffsetForMinimumTargetDistance(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GETOFFSETFORMINIMUMTARGETDISTANCE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 get_Damping()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_DAMPING_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_AngularDamping()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_ANGULARDAMPING_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetCameraPosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GETTARGETCAMERAPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetReferenceOrientation(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GETREFERENCEORIENTATION_OFFSET))(this, a1);
		}
	};
}
