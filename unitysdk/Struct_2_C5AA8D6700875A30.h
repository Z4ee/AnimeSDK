#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define STRUCT_2_C5AA8D6700875A30_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7B5EC0)
#define STRUCT_2_C5AA8D6700875A30_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7B5E30)
#define STRUCT_2_C5AA8D6700875A30_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x7B5F30)
#define STRUCT_2_C5AA8D6700875A30_METHOD_2_F777B3BEDBE68D53_OFFSET UNITYSDK_OFFSET(0x7B5F20)

inline static constexpr unsigned int Struct_2_C5AA8D6700875A30_TypeDefinitionIndex = 89719;

struct alignas(8) Struct_2_C5AA8D6700875A30
{
	::System::Int32 Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x18

	/*
	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + STRUCT_2_C5AA8D6700875A30_FROMFLX_OFFSET))(this, a1);
	}
	*/

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_C5AA8D6700875A30_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F777B3BEDBE68D53(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_C5AA8D6700875A30_METHOD_2_F777B3BEDBE68D53_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + STRUCT_2_C5AA8D6700875A30_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
	}
	*/
};
