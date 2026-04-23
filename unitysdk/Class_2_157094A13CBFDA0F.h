#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1CBCCF81A23ECF1B.h"

class Class_2_FE27D0FC265DDD96;

#define CLASS_2_157094A13CBFDA0F_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9629C30)
#define CLASS_2_157094A13CBFDA0F__CTOR_OFFSET UNITYSDK_OFFSET(0x9629C90)
#define CLASS_2_157094A13CBFDA0F___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9629CA0)

inline static constexpr unsigned int Class_2_157094A13CBFDA0F_TypeDefinitionIndex = 50089;

class Class_2_157094A13CBFDA0F : public ::Class_1_1CBCCF81A23ECF1B
{
public:
	::System::UInt32 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_157094A13CBFDA0F__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_FE27D0FC265DDD96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_2_157094A13CBFDA0F_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Execute(::Class_2_FE27D0FC265DDD96* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_2_157094A13CBFDA0F___IFIXBASEPROXY_EXECUTE_OFFSET))(this, P0);
	}
};
