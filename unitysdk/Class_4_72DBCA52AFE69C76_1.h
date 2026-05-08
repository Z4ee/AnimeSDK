#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_72DBCA52AFE69C76_1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x118B7B10)
#define CLASS_4_72DBCA52AFE69C76_1_METHOD_4_29CA7C76C5D57032_OFFSET UNITYSDK_OFFSET(0x118B7210)
#define CLASS_4_72DBCA52AFE69C76_1_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x118B7000)
#define CLASS_4_72DBCA52AFE69C76_1__CTOR_OFFSET UNITYSDK_OFFSET(0x118B7900)

inline static constexpr unsigned int Class_4_72DBCA52AFE69C76_1_TypeDefinitionIndex = 81547;

class Class_4_72DBCA52AFE69C76_1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x28
	::Class_3_B537A0AA78803363* Field_4_3; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x38
	::Class_3_B537A0AA78803363* Field_4_4; // 0x40
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72DBCA52AFE69C76_1_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
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
