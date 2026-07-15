#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachinePathBase_PositionUnits.h"
#include "unitysdk/Cinemachine/CinemachineTrackedDolly_AutoDolly.h"
#include "unitysdk/Cinemachine/CinemachineTrackedDolly_CameraUpMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachinePathBase; }

#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_GETCAMERAORIENTATIONATPATHPOINT_OFFSET UNITYSDK_OFFSET(0x172A0300)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x1729EEB0)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_GET_ANGULARDAMPING_OFFSET UNITYSDK_OFFSET(0x1729EF30)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1729EE60)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1729EEA0)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1729EFA0)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY__CTOR_OFFSET UNITYSDK_OFFSET(0x172A0900)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTrackedDolly_TypeDefinitionIndex = 37633;

	class CinemachineTrackedDolly : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::Cinemachine::CinemachinePathBase* m_Path; // 0x50
		::System::Single m_PathPosition; // 0x58
		::Cinemachine::CinemachinePathBase_PositionUnits m_PositionUnits; // 0x5C
		::UnityEngine::Vector3 m_PathOffset; // 0x60
		::System::Single m_XDamping; // 0x6C
		::System::Single m_YDamping; // 0x70
		::System::Single m_ZDamping; // 0x74
		::Cinemachine::CinemachineTrackedDolly_CameraUpMode m_CameraUp; // 0x78
		::System::Single m_PitchDamping; // 0x7C
		::System::Single m_YawDamping; // 0x80
		::System::Single m_RollDamping; // 0x84
		::Cinemachine::CinemachineTrackedDolly_AutoDolly m_AutoDolly; // 0x88
		::System::Single m_PreviousPathPosition; // 0x98
		::UnityEngine::Quaternion m_PreviousOrientation; // 0x9C
		::UnityEngine::Vector3 m_PreviousCameraPosition; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::CinemachineCore_Stage get_Stage()
		{
			return ((::Cinemachine::CinemachineCore_Stage(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_GET_STAGE_OFFSET))(this);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_MUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion GetCameraOrientationAtPathPoint(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_GETCAMERAORIENTATIONATPATHPOINT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 get_AngularDamping()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_GET_ANGULARDAMPING_OFFSET))(this);
		}
	};
}
