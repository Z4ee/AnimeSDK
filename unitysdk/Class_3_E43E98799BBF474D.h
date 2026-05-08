#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_E43E98799BBF474D_METHOD_3_709CF7B1B9FB703C_OFFSET UNITYSDK_OFFSET(0x13F2F800)
#define CLASS_3_E43E98799BBF474D_METHOD_3_C2B03D0BAC58142C_OFFSET UNITYSDK_OFFSET(0x13F2F890)
#define CLASS_3_E43E98799BBF474D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13F2FC30)
#define CLASS_3_E43E98799BBF474D_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x13F2F600)
#define CLASS_3_E43E98799BBF474D__CTOR_OFFSET UNITYSDK_OFFSET(0x13F2FAB0)

inline static constexpr unsigned int Class_3_E43E98799BBF474D_TypeDefinitionIndex = 60976;

class Class_3_E43E98799BBF474D : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_2; // 0x20
	::Class_3_B537A0AA78803363* Field_3_4; // 0x28
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_3; // 0x30
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_709CF7B1B9FB703C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D_METHOD_3_709CF7B1B9FB703C_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_C2B03D0BAC58142C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D_METHOD_3_C2B03D0BAC58142C_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
