#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStateDrivenCamera_Instruction_TypeDefinitionIndex = 37595;

	struct alignas(8) CinemachineStateDrivenCamera_Instruction
	{
		::System::Int32 m_FullHash; // 0x10
		::Cinemachine::CinemachineVirtualCameraBase* m_VirtualCamera; // 0x18
		::System::Single m_ActivateAfter; // 0x20
		::System::Single m_MinDuration; // 0x24
	};
}
