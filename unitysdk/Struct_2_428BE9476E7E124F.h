#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_428BE9476E7E124F_METHOD_2_354FAA9DA58CFB18_OFFSET UNITYSDK_OFFSET(0x324D50)
#define STRUCT_2_428BE9476E7E124F_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x7B94A0)
#define STRUCT_2_428BE9476E7E124F_METHOD_2_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x478130)
#define STRUCT_2_428BE9476E7E124F_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x3D1D70)
#define STRUCT_2_428BE9476E7E124F_METHOD_2_558085148BAD886F_OFFSET UNITYSDK_OFFSET(0x259D70)
#define STRUCT_2_428BE9476E7E124F_METHOD_2_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x5A2BD0)
#define STRUCT_2_428BE9476E7E124F_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x53D7C0)
#define STRUCT_2_428BE9476E7E124F__CTOR_OFFSET UNITYSDK_OFFSET(0x9A7B20)

inline static constexpr unsigned int Struct_2_428BE9476E7E124F_TypeDefinitionIndex = 92656;

struct alignas(4) Struct_2_428BE9476E7E124F
{
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x18
	::System::Single Field_2_0; // 0x1C

	::System::Void _ctor(::System::ValueTuple_2<::System::Int32, ::System::Int32> a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_428BE9476E7E124F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_428BE9476E7E124F_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_558085148BAD886F()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_428BE9476E7E124F_METHOD_2_558085148BAD886F_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_428BE9476E7E124F_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_428BE9476E7E124F_METHOD_2_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Void Method_2_354FAA9DA58CFB18(::System::ValueTuple_2<::System::Int32, ::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + STRUCT_2_428BE9476E7E124F_METHOD_2_354FAA9DA58CFB18_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_428BE9476E7E124F_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_428BE9476E7E124F_METHOD_2_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}
};
