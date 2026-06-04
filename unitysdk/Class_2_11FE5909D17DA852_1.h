#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6F2598F82A312737.h"

class Class_2_FE27D0FC265DDD96;

#define CLASS_2_11FE5909D17DA852_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA4DAAE0)
#define CLASS_2_11FE5909D17DA852_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA4DAB40)
#define CLASS_2_11FE5909D17DA852_1___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA4DAB50)

inline static constexpr unsigned int Class_2_11FE5909D17DA852_1_TypeDefinitionIndex = 50756;

class Class_2_11FE5909D17DA852_1 : public ::Class_1_6F2598F82A312737
{
public:
	::System::UInt32 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11FE5909D17DA852_1__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_FE27D0FC265DDD96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_2_11FE5909D17DA852_1_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Execute(::Class_2_FE27D0FC265DDD96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_2_11FE5909D17DA852_1___IFIXBASEPROXY_EXECUTE_OFFSET))(this, a1);
	}
};
