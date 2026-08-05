#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_72DBCA52AFE69C76_1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xF63E670)
#define CLASS_4_72DBCA52AFE69C76_1_METHOD_4_29CA7C76C5D57032_OFFSET UNITYSDK_OFFSET(0xF63DD50)
#define CLASS_4_72DBCA52AFE69C76_1_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xF63DBA0)
#define CLASS_4_72DBCA52AFE69C76_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF63E4A0)

inline static constexpr unsigned int Class_4_72DBCA52AFE69C76_1_TypeDefinitionIndex = 90567;

class Class_4_72DBCA52AFE69C76_1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x28
	::Class_3_B537A0AA78803363* Field_4_0; // 0x30
	::Class_3_B537A0AA78803363* Field_4_7; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76_1_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_29CA7C76C5D57032(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76_1_METHOD_4_29CA7C76C5D57032_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76_1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
