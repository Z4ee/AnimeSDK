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

#define CLASS_3_87545C84AD087646_METHOD_3_1D38927E80F39E02_OFFSET UNITYSDK_OFFSET(0x110CA270)
#define CLASS_3_87545C84AD087646_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x110CA200)
#define CLASS_3_87545C84AD087646_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x110CA7F0)
#define CLASS_3_87545C84AD087646_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x110CA000)
#define CLASS_3_87545C84AD087646__CTOR_OFFSET UNITYSDK_OFFSET(0x110CA670)

inline static constexpr unsigned int Class_3_87545C84AD087646_TypeDefinitionIndex = 72041;

class Class_3_87545C84AD087646 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x20
	::Class_4_8D3E479B491881B3<::System::String*>* Field_3_3; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x30
	::Class_3_B537A0AA78803363* Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87545C84AD087646__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87545C84AD087646_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_87545C84AD087646_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87545C84AD087646_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_1D38927E80F39E02(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_87545C84AD087646_METHOD_3_1D38927E80F39E02_OFFSET))(this, a1);
	}
};
