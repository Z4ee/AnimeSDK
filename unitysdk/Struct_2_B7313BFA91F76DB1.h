#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class Class_3_61A5922E5046F385_2;

#define STRUCT_2_B7313BFA91F76DB1_EQUALS_OFFSET UNITYSDK_OFFSET(0x83BE20)
#define STRUCT_2_B7313BFA91F76DB1_METHOD_2_900854D6DD23E296_OFFSET UNITYSDK_OFFSET(0x83BF10)
#define STRUCT_2_B7313BFA91F76DB1_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0x83BEB0)
#define STRUCT_2_B7313BFA91F76DB1_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x83BE50)

inline static constexpr unsigned int Struct_2_B7313BFA91F76DB1_TypeDefinitionIndex = 80565;

struct alignas(4) Struct_2_B7313BFA91F76DB1
{
	::System::Boolean Field_2_2; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::Boolean Field_2_0; // 0x12
	::System::Boolean Field_2_7; // 0x13
	::System::Boolean Field_2_6; // 0x14
	::System::Boolean Field_2_5; // 0x15
	::System::Boolean Field_2_4; // 0x16
	::System::Boolean Field_2_11; // 0x17
	::System::Boolean Field_2_10; // 0x18
	::System::Boolean Field_2_9; // 0x19
	::System::Boolean Field_2_8; // 0x1A
	::System::Nullable_1<::System::Int32> Field_2_15; // 0x1C
	::System::Nullable_1<::System::Int32> Field_2_14; // 0x24

	::System::Boolean Equals(::Struct_2_B7313BFA91F76DB1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B7313BFA91F76DB1))((::PBYTE)hIl2Cpp + STRUCT_2_B7313BFA91F76DB1_EQUALS_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_B7313BFA91F76DB1_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_B7313BFA91F76DB1_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_900854D6DD23E296(::Class_3_61A5922E5046F385_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_61A5922E5046F385_2*))((::PBYTE)hIl2Cpp + STRUCT_2_B7313BFA91F76DB1_METHOD_2_900854D6DD23E296_OFFSET))(this, a1);
	}
};
