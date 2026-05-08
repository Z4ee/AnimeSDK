#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_E8A4429BF885C303_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x11372FE0)
#define CLASS_4_E8A4429BF885C303_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x113725F0)
#define CLASS_4_E8A4429BF885C303_METHOD_4_DB905DEF666A9606_OFFSET UNITYSDK_OFFSET(0x113727A0)
#define CLASS_4_E8A4429BF885C303__CTOR_OFFSET UNITYSDK_OFFSET(0x11372E80)

inline static constexpr unsigned int Class_4_E8A4429BF885C303_TypeDefinitionIndex = 68484;

class Class_4_E8A4429BF885C303 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_3; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8A4429BF885C303__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8A4429BF885C303_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_DB905DEF666A9606(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_E8A4429BF885C303_METHOD_4_DB905DEF666A9606_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8A4429BF885C303_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
