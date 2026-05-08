#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1D0F14FBEE98E5ED_Class_1_4E271783D45CB8C7;

#define STRUCT_2_07A36661EF3FA679_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x791DE0)
#define STRUCT_2_07A36661EF3FA679_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x791D90)
#define STRUCT_2_07A36661EF3FA679__CTOR_1_OFFSET UNITYSDK_OFFSET(0x791D80)
#define STRUCT_2_07A36661EF3FA679__CTOR_OFFSET UNITYSDK_OFFSET(0x791D50)

inline static constexpr unsigned int Struct_2_07A36661EF3FA679_TypeDefinitionIndex = 45018;

struct alignas(4) Struct_2_07A36661EF3FA679
{
	::System::Boolean Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18

	::System::Void _ctor(::Class_1_1D0F14FBEE98E5ED_Class_1_4E271783D45CB8C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D0F14FBEE98E5ED_Class_1_4E271783D45CB8C7*))((::PBYTE)hIl2Cpp + STRUCT_2_07A36661EF3FA679__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_07A36661EF3FA679__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_07A36661EF3FA679_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_07A36661EF3FA679_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
