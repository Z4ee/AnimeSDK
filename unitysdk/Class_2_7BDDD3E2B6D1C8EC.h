#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_BB3E6AE176160DE3_1;
class Class_2_46FD925988407D1E;

#define CLASS_2_7BDDD3E2B6D1C8EC_METHOD_2_A8B6CF2462085614_OFFSET UNITYSDK_OFFSET(0x18FED480)
#define CLASS_2_7BDDD3E2B6D1C8EC__CTOR_OFFSET UNITYSDK_OFFSET(0x18FED5D0)

inline static constexpr unsigned int Class_2_7BDDD3E2B6D1C8EC_TypeDefinitionIndex = 77526;

class Class_2_7BDDD3E2B6D1C8EC : public ::Class_1_1FB256EC3633CF9E
{
public:
	::RPG::MVector3 OOECFAKCPIL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BDDD3E2B6D1C8EC__CTOR_OFFSET))(this);
	}

	static ::Class_2_7BDDD3E2B6D1C8EC* Method_2_A8B6CF2462085614(::Class_2_46FD925988407D1E* a1, ::Class_1_BB3E6AE176160DE3_1* a2, ::System::UInt64 a3)
	{
		return ((::Class_2_7BDDD3E2B6D1C8EC*(*)(::Class_2_46FD925988407D1E*, ::Class_1_BB3E6AE176160DE3_1*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_7BDDD3E2B6D1C8EC_METHOD_2_A8B6CF2462085614_OFFSET))(a1, a2, a3);
	}
};
