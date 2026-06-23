#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_92CA4861C3EEAF0E_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7625D0)

inline static constexpr unsigned int Struct_2_92CA4861C3EEAF0E_TypeDefinitionIndex = 72005;

struct alignas(1) Struct_2_92CA4861C3EEAF0E
{
	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_92CA4861C3EEAF0E_EXECUTE_OFFSET))(this, a1);
	}
};
