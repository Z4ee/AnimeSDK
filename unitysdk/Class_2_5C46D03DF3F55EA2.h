#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CBD84809434AB007.h"

#define CLASS_2_5C46D03DF3F55EA2_METHOD_2_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x181635B0)
#define CLASS_2_5C46D03DF3F55EA2_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18163520)
#define CLASS_2_5C46D03DF3F55EA2__CTOR_OFFSET UNITYSDK_OFFSET(0x181636D0)

inline static constexpr unsigned int Class_2_5C46D03DF3F55EA2_TypeDefinitionIndex = 74100;

class Class_2_5C46D03DF3F55EA2 : public ::Class_1_CBD84809434AB007
{
public:
	::System::Single DKOFFPPGEFI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C46D03DF3F55EA2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C46D03DF3F55EA2_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5C46D03DF3F55EA2_METHOD_2_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}
};
