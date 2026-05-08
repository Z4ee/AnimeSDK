#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_2CC9B2DCDB307A0C_METHOD_3_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x12C1DC50)
#define CLASS_3_2CC9B2DCDB307A0C_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x12C1E020)
#define CLASS_3_2CC9B2DCDB307A0C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12C1E8A0)
#define CLASS_3_2CC9B2DCDB307A0C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1E5F0)

inline static constexpr unsigned int Class_3_2CC9B2DCDB307A0C_TypeDefinitionIndex = 52879;

class Class_3_2CC9B2DCDB307A0C : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_3; // 0x18
	::Class_3_B537A0AA78803363* Field_3_9; // 0x20
	::Class_4_8D3E479B491881B3<::System::Single>* Field_3_8; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_4; // 0x38
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_6; // 0x40
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_1; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x50
	::Class_4_8D3E479B491881B3<::System::String*>* Field_3_7; // 0x58
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_3_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC9B2DCDB307A0C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC9B2DCDB307A0C_METHOD_3_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_2CC9B2DCDB307A0C_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC9B2DCDB307A0C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
