#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_75C771CB39E8A4A2_METHOD_3_1DC214CDC5A175B8_OFFSET UNITYSDK_OFFSET(0x15781CA0)
#define CLASS_3_75C771CB39E8A4A2_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x15781AF0)
#define CLASS_3_75C771CB39E8A4A2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15782180)
#define CLASS_3_75C771CB39E8A4A2__CTOR_OFFSET UNITYSDK_OFFSET(0x15782040)

inline static constexpr unsigned int Class_3_75C771CB39E8A4A2_TypeDefinitionIndex = 80802;

class Class_3_75C771CB39E8A4A2 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_3_B537A0AA78803363* Field_3_5; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_7; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75C771CB39E8A4A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75C771CB39E8A4A2_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_1DC214CDC5A175B8(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_75C771CB39E8A4A2_METHOD_3_1DC214CDC5A175B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75C771CB39E8A4A2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
