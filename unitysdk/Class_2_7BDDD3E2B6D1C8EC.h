#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A170EEF84D06CBD4.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_D3EE576837DEC92E;
class Class_2_15E317187C4E8254;

#define CLASS_2_7BDDD3E2B6D1C8EC_METHOD_2_A8B6CF2462085614_OFFSET UNITYSDK_OFFSET(0x9A38310)
#define CLASS_2_7BDDD3E2B6D1C8EC__CTOR_OFFSET UNITYSDK_OFFSET(0x9A38460)

inline static constexpr unsigned int Class_2_7BDDD3E2B6D1C8EC_TypeDefinitionIndex = 71495;

class Class_2_7BDDD3E2B6D1C8EC : public ::Class_1_A170EEF84D06CBD4
{
public:
	::RPG::MVector3 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BDDD3E2B6D1C8EC__CTOR_OFFSET))(this);
	}

	static ::Class_2_7BDDD3E2B6D1C8EC* Method_2_A8B6CF2462085614(::Class_2_15E317187C4E8254* a1, ::Class_1_D3EE576837DEC92E* a2, ::System::UInt64 a3)
	{
		return ((::Class_2_7BDDD3E2B6D1C8EC*(*)(::Class_2_15E317187C4E8254*, ::Class_1_D3EE576837DEC92E*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_7BDDD3E2B6D1C8EC_METHOD_2_A8B6CF2462085614_OFFSET))(a1, a2, a3);
	}
};
