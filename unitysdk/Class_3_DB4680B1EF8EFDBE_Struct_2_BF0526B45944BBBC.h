#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_3_DB4680B1EF8EFDBE_STRUCT_2_BF0526B45944BBBC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x50D370)

inline static constexpr unsigned int Class_3_DB4680B1EF8EFDBE_Struct_2_BF0526B45944BBBC_TypeDefinitionIndex = 42210;

struct alignas(4) Class_3_DB4680B1EF8EFDBE_Struct_2_BF0526B45944BBBC
{
	::System::Single Field_2_0; // 0x10

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DB4680B1EF8EFDBE_STRUCT_2_BF0526B45944BBBC_EXECUTE_OFFSET))(this, a1);
	}
};
