#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlendListCamera_Instruction_TypeDefinitionIndex = 37560;

	struct alignas(8) CinemachineBlendListCamera_Instruction
	{
		::Cinemachine::CinemachineVirtualCameraBase* m_VirtualCamera; // 0x10
		::System::Single m_Hold; // 0x18
		::Cinemachine::CinemachineBlendDefinition m_Blend; // 0x20
	};
}
