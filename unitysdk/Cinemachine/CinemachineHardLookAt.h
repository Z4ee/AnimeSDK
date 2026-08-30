#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"

#define CINEMACHINE_CINEMACHINEHARDLOOKAT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x18C629F0)
#define CINEMACHINE_CINEMACHINEHARDLOOKAT_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x18C62B40)
#define CINEMACHINE_CINEMACHINEHARDLOOKAT_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x18C62B50)
#define CINEMACHINE_CINEMACHINEHARDLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C62E40)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineHardLookAt_TypeDefinitionIndex = 38483;

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

		::System::Void MutateCameraState(::Cinemachine::CameraState& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOOKAT_MUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}
	};
}
