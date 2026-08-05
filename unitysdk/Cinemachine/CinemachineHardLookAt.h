#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"

#define CINEMACHINE_CINEMACHINEHARDLOOKAT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F6D1250)
#define CINEMACHINE_CINEMACHINEHARDLOOKAT_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1F6D1380)
#define CINEMACHINE_CINEMACHINEHARDLOOKAT_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1F6D1390)
#define CINEMACHINE_CINEMACHINEHARDLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6D16B0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineHardLookAt_TypeDefinitionIndex = 34707;

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
