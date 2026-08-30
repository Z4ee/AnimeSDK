#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_D000380229CF29DC;
class Class_2_D2E2B5C1B8CC1B01;

#define CLASS_2_FE82F92BA6BF8C47__CTOR_OFFSET UNITYSDK_OFFSET(0xC3810B0)
#define CLASS_2_FE82F92BA6BF8C47__ONBIND_OFFSET UNITYSDK_OFFSET(0xC381030)

inline static constexpr unsigned int Class_2_FE82F92BA6BF8C47_TypeDefinitionIndex = 71790;

class Class_2_FE82F92BA6BF8C47 : public ::Class_1_34917908B7833130
{
public:
	::Class_2_D000380229CF29DC* HNPONLDLJIL; // 0x60
	::Class_2_D2E2B5C1B8CC1B01* OFFIAEFGBOB; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE82F92BA6BF8C47__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE82F92BA6BF8C47__ONBIND_OFFSET))(this);
	}
};
