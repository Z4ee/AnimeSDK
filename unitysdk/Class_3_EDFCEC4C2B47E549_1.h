#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_EDFCEC4C2B47E549_1_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x14FE04F0)
#define CLASS_3_EDFCEC4C2B47E549_1_METHOD_3_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x14FE0810)
#define CLASS_3_EDFCEC4C2B47E549_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14FE0EC0)
#define CLASS_3_EDFCEC4C2B47E549_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14FE0C40)

inline static constexpr unsigned int Class_3_EDFCEC4C2B47E549_1_TypeDefinitionIndex = 62596;

class Class_3_EDFCEC4C2B47E549_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	// static const ::System::String* Field_3_8; // 0x0
	// static const ::System::String* Field_3_9; // 0x0
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_1; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_3; // 0x20
	::Class_3_B537A0AA78803363* Field_3_6; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_5; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_2; // 0x40
	::Class_3_CF43FA1E89397A1C* Field_3_7; // 0x48
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EDFCEC4C2B47E549_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EDFCEC4C2B47E549_1_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_EDFCEC4C2B47E549_1_METHOD_3_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EDFCEC4C2B47E549_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
