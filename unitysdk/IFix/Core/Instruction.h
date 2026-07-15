#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Code.h"
#include "unitysdk/System/ValueType.h"

namespace IFix::Core
{
	inline static constexpr unsigned int Instruction_TypeDefinitionIndex = 9765;

	struct alignas(4) Instruction
	{
		::IFix::Core::Code Code; // 0x10
		::System::Int32 Operand; // 0x14
	};
}
