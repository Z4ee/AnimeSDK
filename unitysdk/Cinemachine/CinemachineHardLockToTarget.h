#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x1FBF96B0)
#define CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1FBF9570)
#define CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1FBF96A0)
#define CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1FBF96C0)
#define CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF9940)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineHardLockToTarget_TypeDefinitionIndex = 34706;

	class CinemachineHardLockToTarget : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::System::Single m_Damping; // 0x50
		::UnityEngine::Vector3 m_PreviousTargetPosition; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::CinemachineCore_Stage get_Stage()
		{
			return ((::Cinemachine::CinemachineCore_Stage(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_GET_STAGE_OFFSET))(this);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_MUTATECAMERASTATE_OFFSET))(this, curState, deltaTime);
		}
	};
}
