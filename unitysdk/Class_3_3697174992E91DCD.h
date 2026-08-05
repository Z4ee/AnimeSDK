#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_3697174992E91DCD_METHOD_3_B19B785D23168BCD_OFFSET UNITYSDK_OFFSET(0x164960B0)
#define CLASS_3_3697174992E91DCD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x164964E0)
#define CLASS_3_3697174992E91DCD_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x16495EB0)
#define CLASS_3_3697174992E91DCD__CTOR_OFFSET UNITYSDK_OFFSET(0x16496360)

inline static constexpr unsigned int Class_3_3697174992E91DCD_TypeDefinitionIndex = 45672;

class Class_3_3697174992E91DCD : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_7; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_2; // 0x20
	::Class_3_B537A0AA78803363* Field_3_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3697174992E91DCD__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3697174992E91DCD_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_B19B785D23168BCD(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_3697174992E91DCD_METHOD_3_B19B785D23168BCD_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3697174992E91DCD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
