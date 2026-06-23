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

#define CINEMACHINE_CINEMACHINETRANSPOSER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1E424570)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x1E422840)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GETOFFSETFORMINIMUMTARGETDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E4240C0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GETREFERENCEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1E424850)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GETTARGETCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1E424E60)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_ANGULARDAMPING_OFFSET UNITYSDK_OFFSET(0x1E422940)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_DAMPING_OFFSET UNITYSDK_OFFSET(0x1E4228F0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_EFFECTIVEOFFSET_OFFSET UNITYSDK_OFFSET(0x1E422690)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_HIDEOFFSETININSPECTOR_OFFSET UNITYSDK_OFFSET(0x1E4226E0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E422700)
#define CINEMACHINE_CINEMACHINETRANSPOSER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1E422830)
#define CINEMACHINE_CINEMACHINETRANSPOSER_INITPREVFRAMESTATEINFO_OFFSET UNITYSDK_OFFSET(0x1E422FE0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1E4229F0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1E4244D0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E422650)
#define CINEMACHINE_CINEMACHINETRANSPOSER_SET_HIDEOFFSETININSPECTOR_OFFSET UNITYSDK_OFFSET(0x1E4226F0)
#define CINEMACHINE_CINEMACHINETRANSPOSER_TRACKTARGET_OFFSET UNITYSDK_OFFSET(0x1E423230)
#define CINEMACHINE_CINEMACHINETRANSPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4251F0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTransposer_TypeDefinitionIndex = 34083;

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

		::System::Void set_HideOffsetInInspector(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_SET_HIDEOFFSETININSPECTOR_OFFSET))(this, value);
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

		::System::Void MutateCameraState(::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_MUTATECAMERASTATE_OFFSET))(this, curState, deltaTime);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::System::Void InitPrevFrameStateInfo(::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_INITPREVFRAMESTATEINFO_OFFSET))(this, curState, deltaTime);
		}

		::System::Void TrackTarget(::System::Single deltaTime, ::UnityEngine::Vector3 up, ::UnityEngine::Vector3 desiredCameraOffset, ::UnityEngine::Vector3& outTargetPosition, ::UnityEngine::Quaternion& outTargetOrient)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_TRACKTARGET_OFFSET))(this, deltaTime, up, desiredCameraOffset, outTargetPosition, outTargetOrient);
		}

		::UnityEngine::Vector3 GetOffsetForMinimumTargetDistance(::UnityEngine::Vector3 dampedTargetPos, ::UnityEngine::Vector3 cameraOffset, ::UnityEngine::Vector3 cameraFwd, ::UnityEngine::Vector3 up, ::UnityEngine::Vector3 actualTargetPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GETOFFSETFORMINIMUMTARGETDISTANCE_OFFSET))(this, dampedTargetPos, cameraOffset, cameraFwd, up, actualTargetPos);
		}

		::UnityEngine::Vector3 get_Damping()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_DAMPING_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_AngularDamping()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GET_ANGULARDAMPING_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetCameraPosition(::UnityEngine::Vector3 worldUp)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GETTARGETCAMERAPOSITION_OFFSET))(this, worldUp);
		}

		::UnityEngine::Quaternion GetReferenceOrientation(::UnityEngine::Vector3 worldUp)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRANSPOSER_GETREFERENCEORIENTATION_OFFSET))(this, worldUp);
		}
	};
}
