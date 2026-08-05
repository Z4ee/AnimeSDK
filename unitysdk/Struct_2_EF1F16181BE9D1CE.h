#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_236FD73ABC492E3F;

#define STRUCT_2_EF1F16181BE9D1CE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8219B0)
#define STRUCT_2_EF1F16181BE9D1CE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x821920)
#define STRUCT_2_EF1F16181BE9D1CE_METHOD_2_66325C6398C388D8_OFFSET UNITYSDK_OFFSET(0x821A40)
#define STRUCT_2_EF1F16181BE9D1CE_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x821A10)

inline static constexpr unsigned int Struct_2_EF1F16181BE9D1CE_TypeDefinitionIndex = 56199;

struct alignas(4) Struct_2_EF1F16181BE9D1CE
{
	::UnityEngine::Vector2 Field_2_1; // 0x10
	::UnityEngine::Vector2 Field_2_0; // 0x18
	::System::Boolean Field_2_7; // 0x20
	::System::Single Field_2_6; // 0x24

	/*
	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + STRUCT_2_EF1F16181BE9D1CE_FROMFLX_OFFSET))(this, a1);
	}
	*/

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_EF1F16181BE9D1CE_FROMBINARY_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + STRUCT_2_EF1F16181BE9D1CE_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_66325C6398C388D8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_EF1F16181BE9D1CE_METHOD_2_66325C6398C388D8_OFFSET))(this, a1, a2);
	}
};
