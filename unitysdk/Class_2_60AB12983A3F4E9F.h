#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_65C11A7D5C8484CD.h"

class Class_2_30798CA871D0A37F;
class Class_2_9D9172C07F82DDAE;
class Class_2_E664D9FA0EBE07B0;

#define CLASS_2_60AB12983A3F4E9F_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x127CB6E0)
#define CLASS_2_60AB12983A3F4E9F__CTOR_OFFSET UNITYSDK_OFFSET(0x127CB570)

inline static constexpr unsigned int Class_2_60AB12983A3F4E9F_TypeDefinitionIndex = 80004;

class Class_2_60AB12983A3F4E9F : public ::Class_1_65C11A7D5C8484CD
{
public:
	::Class_2_E664D9FA0EBE07B0* Field_2_1; // 0x20
	::Class_2_9D9172C07F82DDAE* Field_2_0; // 0x28

	::System::Void _ctor(::Class_2_30798CA871D0A37F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_30798CA871D0A37F*))((::PBYTE)hIl2Cpp + CLASS_2_60AB12983A3F4E9F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60AB12983A3F4E9F_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}
};
