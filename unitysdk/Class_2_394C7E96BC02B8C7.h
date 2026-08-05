#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C9475796DAA2AC15.h"

class Class_0_16E4307DCC419505_473;
namespace System { class String; }

#define CLASS_2_394C7E96BC02B8C7_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x14639520)
#define CLASS_2_394C7E96BC02B8C7_METHOD_2_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x14639380)
#define CLASS_2_394C7E96BC02B8C7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14639480)
#define CLASS_2_394C7E96BC02B8C7__CTOR_OFFSET UNITYSDK_OFFSET(0x14639300)

inline static constexpr unsigned int Class_2_394C7E96BC02B8C7_TypeDefinitionIndex = 77623;

class Class_2_394C7E96BC02B8C7 : public ::Class_1_C9475796DAA2AC15
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_473*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_473*&))((::PBYTE)hIl2Cpp + CLASS_2_394C7E96BC02B8C7__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_394C7E96BC02B8C7_METHOD_2_8A76897D6A693475_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_394C7E96BC02B8C7_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_394C7E96BC02B8C7_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
