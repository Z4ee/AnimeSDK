#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_1E8CB6221F12396D_METHOD_3_407894370630C861_OFFSET UNITYSDK_OFFSET(0x12AECCC0)
#define CLASS_3_1E8CB6221F12396D_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x12AECB10)
#define CLASS_3_1E8CB6221F12396D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12AED1C0)
#define CLASS_3_1E8CB6221F12396D__CTOR_OFFSET UNITYSDK_OFFSET(0x12AED080)

inline static constexpr unsigned int Class_3_1E8CB6221F12396D_TypeDefinitionIndex = 56917;

class Class_3_1E8CB6221F12396D : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_7; // 0x18
	::Class_3_CF43FA1E89397A1C* Field_3_6; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E8CB6221F12396D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E8CB6221F12396D_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_407894370630C861(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_1E8CB6221F12396D_METHOD_3_407894370630C861_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E8CB6221F12396D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
