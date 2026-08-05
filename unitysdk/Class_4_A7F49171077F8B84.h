#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_A7F49171077F8B84_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x15B36A00)
#define CLASS_4_A7F49171077F8B84_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15B379D0)
#define CLASS_4_A7F49171077F8B84_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x15B36C70)
#define CLASS_4_A7F49171077F8B84_METHOD_4_A32C34C28EBFFA29_OFFSET UNITYSDK_OFFSET(0x15B36CE0)
#define CLASS_4_A7F49171077F8B84__CTOR_OFFSET UNITYSDK_OFFSET(0x15B377F0)

inline static constexpr unsigned int Class_4_A7F49171077F8B84_TypeDefinitionIndex = 60942;

class Class_4_A7F49171077F8B84 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_2; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_5; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7F49171077F8B84__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7F49171077F8B84_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_A7F49171077F8B84_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_A32C34C28EBFFA29(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_A7F49171077F8B84_METHOD_4_A32C34C28EBFFA29_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A7F49171077F8B84_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
