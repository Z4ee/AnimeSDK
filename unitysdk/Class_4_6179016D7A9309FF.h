#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_6179016D7A9309FF_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12CFB3C0)
#define CLASS_4_6179016D7A9309FF_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x12CFACC0)
#define CLASS_4_6179016D7A9309FF_METHOD_4_652514A15DC5E0CD_OFFSET UNITYSDK_OFFSET(0x12CFADA0)
#define CLASS_4_6179016D7A9309FF__CTOR_OFFSET UNITYSDK_OFFSET(0x12CFB2D0)

inline static constexpr unsigned int Class_4_6179016D7A9309FF_TypeDefinitionIndex = 62971;

class Class_4_6179016D7A9309FF : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6179016D7A9309FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6179016D7A9309FF_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_652514A15DC5E0CD(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_6179016D7A9309FF_METHOD_4_652514A15DC5E0CD_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6179016D7A9309FF_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
