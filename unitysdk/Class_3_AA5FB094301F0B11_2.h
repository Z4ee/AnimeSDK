#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_AA5FB094301F0B11_2_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x158C2290)
#define CLASS_3_AA5FB094301F0B11_2_METHOD_3_4B5B99B2F49E658A_OFFSET UNITYSDK_OFFSET(0x158C24F0)
#define CLASS_3_AA5FB094301F0B11_2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x158C2CF0)
#define CLASS_3_AA5FB094301F0B11_2__CTOR_OFFSET UNITYSDK_OFFSET(0x158C2B30)

inline static constexpr unsigned int Class_3_AA5FB094301F0B11_2_TypeDefinitionIndex = 79392;

class Class_3_AA5FB094301F0B11_2 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_1; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_0; // 0x20
	::Class_3_B537A0AA78803363* Field_3_4; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_6; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_5; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA5FB094301F0B11_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA5FB094301F0B11_2_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_4B5B99B2F49E658A(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_AA5FB094301F0B11_2_METHOD_3_4B5B99B2F49E658A_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA5FB094301F0B11_2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
