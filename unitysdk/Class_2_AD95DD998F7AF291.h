#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_59F0DDB39D5654B9;

#define CLASS_2_AD95DD998F7AF291_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x190D6EA0)
#define CLASS_2_AD95DD998F7AF291__CTOR_OFFSET UNITYSDK_OFFSET(0x190D6E90)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_TypeDefinitionIndex = 34776;

class Class_2_AD95DD998F7AF291 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_59F0DDB39D5654B9* Field_2_0; // 0x18

	::System::Void _ctor(::Class_2_59F0DDB39D5654B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_59F0DDB39D5654B9*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}
};
