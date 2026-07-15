#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6F2598F82A312737.h"

class Class_2_FE27D0FC265DDD96;

#define CLASS_2_B6CCA72EF5A09D1D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1525C670)
#define CLASS_2_B6CCA72EF5A09D1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1525C6D0)

inline static constexpr unsigned int Class_2_B6CCA72EF5A09D1D_TypeDefinitionIndex = 51838;

class Class_2_B6CCA72EF5A09D1D : public ::Class_1_6F2598F82A312737
{
public:
	::System::UInt32 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6CCA72EF5A09D1D__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_FE27D0FC265DDD96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_2_B6CCA72EF5A09D1D_EXECUTE_OFFSET))(this, a1);
	}
};
