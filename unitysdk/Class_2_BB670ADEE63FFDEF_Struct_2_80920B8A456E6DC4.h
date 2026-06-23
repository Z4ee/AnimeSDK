#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_BB670ADEE63FFDEF_STRUCT_2_80920B8A456E6DC4_METHOD_2_0D619D33FB7130CC_OFFSET UNITYSDK_OFFSET(0x1345AE40)
#define CLASS_2_BB670ADEE63FFDEF_STRUCT_2_80920B8A456E6DC4_METHOD_2_1E4302662C7422C2_OFFSET UNITYSDK_OFFSET(0x7B0F60)
#define CLASS_2_BB670ADEE63FFDEF_STRUCT_2_80920B8A456E6DC4__CTOR_OFFSET UNITYSDK_OFFSET(0x7B0F40)

inline static constexpr unsigned int Class_2_BB670ADEE63FFDEF_Struct_2_80920B8A456E6DC4_TypeDefinitionIndex = 63436;

struct alignas(4) Class_2_BB670ADEE63FFDEF_Struct_2_80920B8A456E6DC4
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Boolean Field_2_4; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BB670ADEE63FFDEF_STRUCT_2_80920B8A456E6DC4__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_2_BB670ADEE63FFDEF_Struct_2_80920B8A456E6DC4 Method_2_0D619D33FB7130CC(::System::Int32 a1)
	{
		return ((::Class_2_BB670ADEE63FFDEF_Struct_2_80920B8A456E6DC4(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BB670ADEE63FFDEF_STRUCT_2_80920B8A456E6DC4_METHOD_2_0D619D33FB7130CC_OFFSET))(a1);
	}

	::System::Boolean Method_2_1E4302662C7422C2(::Class_2_BB670ADEE63FFDEF_Struct_2_80920B8A456E6DC4& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_BB670ADEE63FFDEF_Struct_2_80920B8A456E6DC4&))((::PBYTE)hIl2Cpp + CLASS_2_BB670ADEE63FFDEF_STRUCT_2_80920B8A456E6DC4_METHOD_2_1E4302662C7422C2_OFFSET))(this, a1);
	}
};
