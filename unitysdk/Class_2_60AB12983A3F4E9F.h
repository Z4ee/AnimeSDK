#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_65C11A7D5C8484CD_2.h"

class Class_2_03F4D9B3111E6159;
class Class_2_3015A1CEA116F463;
class Class_2_DA3A8DDFF1297CFF;

#define CLASS_2_60AB12983A3F4E9F_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x11AA0700)
#define CLASS_2_60AB12983A3F4E9F__CTOR_OFFSET UNITYSDK_OFFSET(0x11AA0590)

inline static constexpr unsigned int Class_2_60AB12983A3F4E9F_TypeDefinitionIndex = 77927;

class Class_2_60AB12983A3F4E9F : public ::Class_1_65C11A7D5C8484CD_2
{
public:
	::Class_2_03F4D9B3111E6159* Field_2_0; // 0x20
	::Class_2_3015A1CEA116F463* Field_2_1; // 0x28

	::System::Void _ctor(::Class_2_DA3A8DDFF1297CFF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DA3A8DDFF1297CFF*))((::PBYTE)hIl2Cpp + CLASS_2_60AB12983A3F4E9F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60AB12983A3F4E9F_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}
};
