#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_4_3E9D40A4A48F0024;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_801759B0428F7D60_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x102908F0)
#define CLASS_4_801759B0428F7D60_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10290290)
#define CLASS_4_801759B0428F7D60_METHOD_4_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x10290440)
#define CLASS_4_801759B0428F7D60__CTOR_OFFSET UNITYSDK_OFFSET(0x102907B0)

inline static constexpr unsigned int Class_4_801759B0428F7D60_TypeDefinitionIndex = 79426;

class Class_4_801759B0428F7D60 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_7; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x38
	::Class_4_3E9D40A4A48F0024* Field_4_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_801759B0428F7D60__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_801759B0428F7D60_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_801759B0428F7D60_METHOD_4_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_801759B0428F7D60_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
