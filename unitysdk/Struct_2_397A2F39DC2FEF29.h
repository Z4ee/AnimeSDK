#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define STRUCT_2_397A2F39DC2FEF29_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6ED610)
#define STRUCT_2_397A2F39DC2FEF29_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6ED580)
#define STRUCT_2_397A2F39DC2FEF29_METHOD_2_03482897E56BA861_OFFSET UNITYSDK_OFFSET(0x6ED6A0)
#define STRUCT_2_397A2F39DC2FEF29_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x6ED670)

inline static constexpr unsigned int Struct_2_397A2F39DC2FEF29_TypeDefinitionIndex = 47197;

struct alignas(8) Struct_2_397A2F39DC2FEF29
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::System::String* Field_2_2; // 0x28

	/*
	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + STRUCT_2_397A2F39DC2FEF29_FROMFLX_OFFSET))(this, a1);
	}
	*/

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_397A2F39DC2FEF29_FROMBINARY_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + STRUCT_2_397A2F39DC2FEF29_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_03482897E56BA861(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_397A2F39DC2FEF29_METHOD_2_03482897E56BA861_OFFSET))(this, a1, a2);
	}
};
