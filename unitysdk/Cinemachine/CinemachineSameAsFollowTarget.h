#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x12B97E60)
#define CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x12B97DF0)
#define CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x12B97E50)
#define CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x12B97E70)
#define CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x12B98030)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineSameAsFollowTarget_TypeDefinitionIndex = 36550;

	class CinemachineSameAsFollowTarget : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::System::Single m_Damping; // 0x50
		::UnityEngine::Quaternion m_PreviousReferenceOrientation; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::CinemachineCore_Stage get_Stage()
		{
			return ((::Cinemachine::CinemachineCore_Stage(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_GET_STAGE_OFFSET))(this);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_MUTATECAMERASTATE_OFFSET))(this, curState, deltaTime);
		}
	};
}
