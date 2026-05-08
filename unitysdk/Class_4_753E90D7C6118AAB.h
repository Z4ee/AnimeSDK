#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_753E90D7C6118AAB_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xF3B8030)
#define CLASS_4_753E90D7C6118AAB_METHOD_4_B5FF895C58FE544D_OFFSET UNITYSDK_OFFSET(0xF3B7A10)
#define CLASS_4_753E90D7C6118AAB_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xF3B7800)
#define CLASS_4_753E90D7C6118AAB__CTOR_OFFSET UNITYSDK_OFFSET(0xF3B7E90)

inline static constexpr unsigned int Class_4_753E90D7C6118AAB_TypeDefinitionIndex = 39721;

class Class_4_753E90D7C6118AAB : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_2; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_4; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_3; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_753E90D7C6118AAB__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_753E90D7C6118AAB_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_B5FF895C58FE544D(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_753E90D7C6118AAB_METHOD_4_B5FF895C58FE544D_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_753E90D7C6118AAB_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
