#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_873FF57321B73E3E_1_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1554E790)
#define CLASS_3_873FF57321B73E3E_1_METHOD_3_709CF7B1B9FB703C_OFFSET UNITYSDK_OFFSET(0x1554E9F0)
#define CLASS_3_873FF57321B73E3E_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1554F030)
#define CLASS_3_873FF57321B73E3E_1_METHOD_3_ED2D6572B7D362DE_OFFSET UNITYSDK_OFFSET(0x1554EA80)
#define CLASS_3_873FF57321B73E3E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1554EE70)

inline static constexpr unsigned int Class_3_873FF57321B73E3E_1_TypeDefinitionIndex = 78504;

class Class_3_873FF57321B73E3E_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_7; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x20
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_2; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_3; // 0x30
	::Class_3_B537A0AA78803363* Field_3_6; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_873FF57321B73E3E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_873FF57321B73E3E_1_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_709CF7B1B9FB703C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_873FF57321B73E3E_1_METHOD_3_709CF7B1B9FB703C_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_873FF57321B73E3E_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_ED2D6572B7D362DE(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_873FF57321B73E3E_1_METHOD_3_ED2D6572B7D362DE_OFFSET))(this, a1);
	}
};
