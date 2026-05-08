#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_A5B66109EEA678CE_METHOD_3_A32C34C28EBFFA29_OFFSET UNITYSDK_OFFSET(0x1354AE10)
#define CLASS_3_A5B66109EEA678CE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1354B340)
#define CLASS_3_A5B66109EEA678CE_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1354AC10)
#define CLASS_3_A5B66109EEA678CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1354B1C0)

inline static constexpr unsigned int Class_3_A5B66109EEA678CE_TypeDefinitionIndex = 46940;

class Class_3_A5B66109EEA678CE : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_3; // 0x30
	::Class_3_CF43FA1E89397A1C* Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5B66109EEA678CE__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5B66109EEA678CE_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_A32C34C28EBFFA29(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_A5B66109EEA678CE_METHOD_3_A32C34C28EBFFA29_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5B66109EEA678CE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
