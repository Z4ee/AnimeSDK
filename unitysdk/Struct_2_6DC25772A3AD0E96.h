#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6DC25772A3AD0E96_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x3D1D70)
#define STRUCT_2_6DC25772A3AD0E96_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x424ED0)
#define STRUCT_2_6DC25772A3AD0E96_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x325570)
#define STRUCT_2_6DC25772A3AD0E96__CTOR_OFFSET UNITYSDK_OFFSET(0x82D210)

inline static constexpr unsigned int Struct_2_6DC25772A3AD0E96_TypeDefinitionIndex = 29602;

struct alignas(4) Struct_2_6DC25772A3AD0E96
{
	::System::Int32 Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Single Field_2_0; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_6DC25772A3AD0E96__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6DC25772A3AD0E96_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6DC25772A3AD0E96_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6DC25772A3AD0E96_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}
};
