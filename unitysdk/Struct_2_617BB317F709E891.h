#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_617BB317F709E891_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6F56D0)

inline static constexpr unsigned int Struct_2_617BB317F709E891_TypeDefinitionIndex = 72380;

struct alignas(1) Struct_2_617BB317F709E891
{
	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_617BB317F709E891_EXECUTE_OFFSET))(this, a1);
	}
};
