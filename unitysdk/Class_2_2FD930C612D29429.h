#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_2_4E7CB4BEC9F51C9D;

#define CLASS_2_2FD930C612D29429_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16EA6080)
#define CLASS_2_2FD930C612D29429__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA60C0)

inline static constexpr unsigned int Class_2_2FD930C612D29429_TypeDefinitionIndex = 86905;

class Class_2_2FD930C612D29429 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_2_4E7CB4BEC9F51C9D* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FD930C612D29429__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FD930C612D29429_ONCREATEPROPERTY_OFFSET))(this);
	}
};
