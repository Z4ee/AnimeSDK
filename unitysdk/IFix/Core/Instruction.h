#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1D073388C0CE4811.h"
#include "unitysdk/System/ValueType.h"

namespace IFix::Core
{
	inline static constexpr unsigned int Instruction_TypeDefinitionIndex = 6939;

	struct alignas(4) Instruction
	{
		// static const ::System::UInt64 Field_2_2 = 0x49E85D573E; // 0x0
		::Enum_3_1D073388C0CE4811 Code; // 0x10
		::System::Int32 Operand; // 0x14
	};
}
