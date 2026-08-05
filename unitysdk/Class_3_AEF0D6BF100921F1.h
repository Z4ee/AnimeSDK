#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_AEF0D6BF100921F1_METHOD_3_1614B23D488B9123_OFFSET UNITYSDK_OFFSET(0x16663040)
#define CLASS_3_AEF0D6BF100921F1_METHOD_3_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x16662C00)
#define CLASS_3_AEF0D6BF100921F1_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x16662FD0)
#define CLASS_3_AEF0D6BF100921F1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16663A20)
#define CLASS_3_AEF0D6BF100921F1__CTOR_OFFSET UNITYSDK_OFFSET(0x16663770)

inline static constexpr unsigned int Class_3_AEF0D6BF100921F1_TypeDefinitionIndex = 63613;

class Class_3_AEF0D6BF100921F1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_2; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_10; // 0x20
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_7; // 0x30
	::Class_3_B537A0AA78803363* Field_3_9; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_0; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::Boolean>*>* Field_3_6; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_4; // 0x50
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_5; // 0x58
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_11; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AEF0D6BF100921F1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AEF0D6BF100921F1_METHOD_3_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_AEF0D6BF100921F1_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AEF0D6BF100921F1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_1614B23D488B9123(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_AEF0D6BF100921F1_METHOD_3_1614B23D488B9123_OFFSET))(this, a1);
	}
};
