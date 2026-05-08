#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace System { class String; }

namespace Cinemachine
{
	inline static constexpr unsigned int NapVirtualStateDrivenCamera_Instruction_TypeDefinitionIndex = 32507;

	struct alignas(8) NapVirtualStateDrivenCamera_Instruction
	{
		::System::String* m_MoveType; // 0x10
		::Cinemachine::CinemachineVirtualCameraBase* m_VirtualCamera; // 0x18
		::System::Single m_ActivateAfter; // 0x20
		::System::Single m_MinDuration; // 0x24
	};
}
