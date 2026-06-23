#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_B51FB35349ACD175;

#define CLASS_4_059EF237BA379147_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x113F08E0)
#define CLASS_4_059EF237BA379147_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x113F0BB0)
#define CLASS_4_059EF237BA379147_METHOD_4_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x113F0A30)
#define CLASS_4_059EF237BA379147__CTOR_OFFSET UNITYSDK_OFFSET(0x113F0A80)

inline static constexpr unsigned int Class_4_059EF237BA379147_TypeDefinitionIndex = 59786;

class Class_4_059EF237BA379147 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_B51FB35349ACD175<::System::String*>* Field_4_0; // 0x28
	::Class_4_B51FB35349ACD175<::System::Boolean>* Field_4_2; // 0x30
	::Class_4_B51FB35349ACD175<::System::Boolean>* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_059EF237BA379147__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_059EF237BA379147_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_8CE0803574BB66D7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_059EF237BA379147_METHOD_4_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_059EF237BA379147_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
