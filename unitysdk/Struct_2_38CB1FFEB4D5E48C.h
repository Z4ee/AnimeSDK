#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1FA5778937A46993;
class Class_1_ECA794E759B34D01;

#define STRUCT_2_38CB1FFEB4D5E48C_METHOD_2_2F2D90AD2ECC1BEB_OFFSET UNITYSDK_OFFSET(0x9F7740)
#define STRUCT_2_38CB1FFEB4D5E48C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9F7750)

inline static constexpr unsigned int Struct_2_38CB1FFEB4D5E48C_TypeDefinitionIndex = 92047;

struct alignas(8) Struct_2_38CB1FFEB4D5E48C
{
	::Class_1_1FA5778937A46993* Field_2_1; // 0x10
	::Class_1_ECA794E759B34D01* Field_2_0; // 0x18

	::System::Boolean Method_2_2F2D90AD2ECC1BEB(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_38CB1FFEB4D5E48C_METHOD_2_2F2D90AD2ECC1BEB_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_38CB1FFEB4D5E48C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
