#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_F11937775BA18DB5_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1A8A5CF0)
#define CLASS_4_F11937775BA18DB5_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1A8A5670)
#define CLASS_4_F11937775BA18DB5_METHOD_4_D38916CDC8783C4C_OFFSET UNITYSDK_OFFSET(0x1A8A5820)
#define CLASS_4_F11937775BA18DB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A5B90)

inline static constexpr unsigned int Class_4_F11937775BA18DB5_TypeDefinitionIndex = 70498;

class Class_4_F11937775BA18DB5 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_2; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_7; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F11937775BA18DB5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F11937775BA18DB5_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_D38916CDC8783C4C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_F11937775BA18DB5_METHOD_4_D38916CDC8783C4C_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F11937775BA18DB5_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
