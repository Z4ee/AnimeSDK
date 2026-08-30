#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6F2598F82A312737.h"

class Class_2_FE27D0FC265DDD96;

#define CLASS_2_B6CCA72EF5A09D1D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16CAD5D0)
#define CLASS_2_B6CCA72EF5A09D1D__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAD630)

inline static constexpr unsigned int Class_2_B6CCA72EF5A09D1D_TypeDefinitionIndex = 54522;

class Class_2_B6CCA72EF5A09D1D : public ::Class_1_6F2598F82A312737
{
public:
	::System::UInt32 EPFICDCCGPE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6CCA72EF5A09D1D__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_FE27D0FC265DDD96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_2_B6CCA72EF5A09D1D_EXECUTE_OFFSET))(this, a1);
	}
};
