#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_B453F5246BCD1573_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x16A69680)
#define CLASS_4_B453F5246BCD1573_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16A69180)
#define CLASS_4_B453F5246BCD1573_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x16A69260)
#define CLASS_4_B453F5246BCD1573_METHOD_4_7E5B07261D121B15_OFFSET UNITYSDK_OFFSET(0x16A692D0)
#define CLASS_4_B453F5246BCD1573__CTOR_OFFSET UNITYSDK_OFFSET(0x16A69590)

inline static constexpr unsigned int Class_4_B453F5246BCD1573_TypeDefinitionIndex = 79914;

class Class_4_B453F5246BCD1573 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B453F5246BCD1573__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B453F5246BCD1573_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_B453F5246BCD1573_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B453F5246BCD1573_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_7E5B07261D121B15(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_B453F5246BCD1573_METHOD_4_7E5B07261D121B15_OFFSET))(this, a1);
	}
};
