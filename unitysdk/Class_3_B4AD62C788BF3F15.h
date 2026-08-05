#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_B4AD62C788BF3F15_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x14813B40)
#define CLASS_3_B4AD62C788BF3F15_METHOD_3_433808BA5B6C68F6_OFFSET UNITYSDK_OFFSET(0x14813CF0)
#define CLASS_3_B4AD62C788BF3F15_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14814270)
#define CLASS_3_B4AD62C788BF3F15__CTOR_OFFSET UNITYSDK_OFFSET(0x148140E0)

inline static constexpr unsigned int Class_3_B4AD62C788BF3F15_TypeDefinitionIndex = 79103;

class Class_3_B4AD62C788BF3F15 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_1; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x20
	::Class_3_CF43FA1E89397A1C* Field_3_0; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4AD62C788BF3F15__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4AD62C788BF3F15_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_433808BA5B6C68F6(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_B4AD62C788BF3F15_METHOD_3_433808BA5B6C68F6_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4AD62C788BF3F15_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
