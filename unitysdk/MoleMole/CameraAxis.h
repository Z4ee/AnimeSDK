#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int CameraAxis_TypeDefinitionIndex = 90178;

	struct alignas(4) CameraAxis
	{
		::System::Single m_MaxSpeed; // 0x10
		::System::Single m_AccelTime; // 0x14
		::System::Single m_DecelTime; // 0x18
		::System::Boolean m_InvertInput; // 0x1C
	};
}
