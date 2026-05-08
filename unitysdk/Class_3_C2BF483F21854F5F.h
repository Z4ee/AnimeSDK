#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_C2BF483F21854F5F_METHOD_3_29CA7C76C5D57032_OFFSET UNITYSDK_OFFSET(0xF657560)
#define CLASS_3_C2BF483F21854F5F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF6579B0)
#define CLASS_3_C2BF483F21854F5F_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xF657360)
#define CLASS_3_C2BF483F21854F5F__CTOR_OFFSET UNITYSDK_OFFSET(0xF657830)

inline static constexpr unsigned int Class_3_C2BF483F21854F5F_TypeDefinitionIndex = 51311;

class Class_3_C2BF483F21854F5F : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_4; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_3; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_2; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_29CA7C76C5D57032(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F_METHOD_3_29CA7C76C5D57032_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
