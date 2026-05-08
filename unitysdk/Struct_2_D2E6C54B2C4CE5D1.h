#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_445;

#define STRUCT_2_D2E6C54B2C4CE5D1_METHOD_2_5F6398776E49CD87_OFFSET UNITYSDK_OFFSET(0x6B09B0)
#define STRUCT_2_D2E6C54B2C4CE5D1_METHOD_2_B35C77B581CCAC4F_OFFSET UNITYSDK_OFFSET(0xF9FB6F0)
#define STRUCT_2_D2E6C54B2C4CE5D1__CTOR_OFFSET UNITYSDK_OFFSET(0x6B09A0)

inline static constexpr unsigned int Struct_2_D2E6C54B2C4CE5D1_TypeDefinitionIndex = 69302;

struct alignas(8) Struct_2_D2E6C54B2C4CE5D1
{
	::Class_0_16E4307DCC419505_445* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_445*& a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_445*&, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_D2E6C54B2C4CE5D1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_D2E6C54B2C4CE5D1 Method_2_B35C77B581CCAC4F()
	{
		return ((::Struct_2_D2E6C54B2C4CE5D1(*)())((::PBYTE)hIl2Cpp + STRUCT_2_D2E6C54B2C4CE5D1_METHOD_2_B35C77B581CCAC4F_OFFSET))();
	}

	::System::Boolean Method_2_5F6398776E49CD87(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_D2E6C54B2C4CE5D1_METHOD_2_5F6398776E49CD87_OFFSET))(this, a1, a2);
	}
};
