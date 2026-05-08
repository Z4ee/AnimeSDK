#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"

#define CINEMACHINE_CINEMACHINEHARDLOOKAT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1BF72290)
#define CINEMACHINE_CINEMACHINEHARDLOOKAT_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1BF723C0)
#define CINEMACHINE_CINEMACHINEHARDLOOKAT_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1BF723D0)
#define CINEMACHINE_CINEMACHINEHARDLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF72760)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineHardLookAt_TypeDefinitionIndex = 32520;

	class CinemachineHardLookAt : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOOKAT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOOKAT_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::CinemachineCore_Stage get_Stage()
		{
			return ((::Cinemachine::CinemachineCore_Stage(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOOKAT_GET_STAGE_OFFSET))(this);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOOKAT_MUTATECAMERASTATE_OFFSET))(this, curState, deltaTime);
		}
	};
}
