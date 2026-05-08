#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_1B1A5EA7745471EC_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15488FE0)
#define CLASS_4_1B1A5EA7745471EC_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x154895F0)
#define CLASS_4_1B1A5EA7745471EC_METHOD_4_6249445325A6227E_OFFSET UNITYSDK_OFFSET(0x15489130)
#define CLASS_4_1B1A5EA7745471EC__CTOR_OFFSET UNITYSDK_OFFSET(0x15489460)

inline static constexpr unsigned int Class_4_1B1A5EA7745471EC_TypeDefinitionIndex = 81661;

class Class_4_1B1A5EA7745471EC : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_0; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_1; // 0x30
	::Class_3_CF43FA1E89397A1C* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1B1A5EA7745471EC__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1B1A5EA7745471EC_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_6249445325A6227E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_1B1A5EA7745471EC_METHOD_4_6249445325A6227E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1B1A5EA7745471EC_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
