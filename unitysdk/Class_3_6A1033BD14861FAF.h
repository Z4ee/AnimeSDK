#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_6A1033BD14861FAF_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1EC64850)
#define CLASS_3_6A1033BD14861FAF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1EC64F40)
#define CLASS_3_6A1033BD14861FAF_METHOD_3_D3748E13451185D3_OFFSET UNITYSDK_OFFSET(0x1EC64A00)
#define CLASS_3_6A1033BD14861FAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC64E00)

inline static constexpr unsigned int Class_3_6A1033BD14861FAF_TypeDefinitionIndex = 76252;

class Class_3_6A1033BD14861FAF : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_7; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A1033BD14861FAF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A1033BD14861FAF_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_D3748E13451185D3(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_6A1033BD14861FAF_METHOD_3_D3748E13451185D3_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A1033BD14861FAF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
