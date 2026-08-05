#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace System { class String; }

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapActionVirtualStateDrivenCamera_Instruction_TypeDefinitionIndex = 42007;

	struct alignas(8) NapActionVirtualStateDrivenCamera_Instruction
	{
		::System::String* m_MoveStateValue; // 0x10
		::Cinemachine::CinemachineVirtualCameraBase* m_VirtualCamera; // 0x18
		::System::Single m_ActivateAfter; // 0x20
		::System::Single m_MinDuration; // 0x24
	};
}
