#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_9B5CFD640DDF761C_3_STRUCT_2_180B60CDE5C08387_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5E83C0)

inline static constexpr unsigned int Class_2_9B5CFD640DDF761C_3_Struct_2_180B60CDE5C08387_TypeDefinitionIndex = 46183;

struct alignas(4) Class_2_9B5CFD640DDF761C_3_Struct_2_180B60CDE5C08387
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_3_STRUCT_2_180B60CDE5C08387_EXECUTE_OFFSET))(this, a1);
	}
};
