#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_98FF9BCC44FC0708_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x1C3E4F00)
#define CLASS_3_98FF9BCC44FC0708_METHOD_3_AA057FA416D87874_OFFSET UNITYSDK_OFFSET(0x1C3E5A30)
#define CLASS_3_98FF9BCC44FC0708_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x1C3E4F70)
#define CLASS_3_98FF9BCC44FC0708_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C3E59A0)
#define CLASS_3_98FF9BCC44FC0708_METHOD_3_F8646F9058372F3E_OFFSET UNITYSDK_OFFSET(0x1C3E5B00)
#define CLASS_3_98FF9BCC44FC0708_METHOD_3_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x1C3E4A70)
#define CLASS_3_98FF9BCC44FC0708__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E5670)

inline static constexpr unsigned int Class_3_98FF9BCC44FC0708_TypeDefinitionIndex = 69785;

class Class_3_98FF9BCC44FC0708 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_11; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_8; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_5; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_0; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_4; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_15; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_6; // 0x50
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_9; // 0x58
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_10; // 0x60
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_7; // 0x68
	::Class_3_B537A0AA78803363* Field_3_14; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98FF9BCC44FC0708__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_FFD65E4FEAD3C019()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98FF9BCC44FC0708_METHOD_3_FFD65E4FEAD3C019_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_98FF9BCC44FC0708_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98FF9BCC44FC0708_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Action* Method_3_AA057FA416D87874(::Struct_2_29439DBE2B63DCF3& a1, ::System::String* a2)
	{
		return ((::System::Action*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_98FF9BCC44FC0708_METHOD_3_AA057FA416D87874_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_98FF9BCC44FC0708_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_F8646F9058372F3E(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_98FF9BCC44FC0708_METHOD_3_F8646F9058372F3E_OFFSET))(a1, a2);
	}
};
