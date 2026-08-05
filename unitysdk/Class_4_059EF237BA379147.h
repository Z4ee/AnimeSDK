#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_059EF237BA379147_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x147897B0)
#define CLASS_4_059EF237BA379147_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x14789A80)
#define CLASS_4_059EF237BA379147_METHOD_4_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x14789900)
#define CLASS_4_059EF237BA379147__CTOR_OFFSET UNITYSDK_OFFSET(0x14789950)

inline static constexpr unsigned int Class_4_059EF237BA379147_TypeDefinitionIndex = 55299;

class Class_4_059EF237BA379147 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_4_7; // 0x28
	::Class_4_8D3E479B491881B3<::System::String*>* Field_4_0; // 0x30
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_4_6; // 0x38

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
