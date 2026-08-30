#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"
#include "unitysdk/Struct_2_27685EFF2E84A814.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_766DC31D5CE80B30_1_METHOD_2_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0xBE8BE20)
#define CLASS_2_766DC31D5CE80B30_1_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xBE8C550)
#define CLASS_2_766DC31D5CE80B30_1_METHOD_2_87411ABA28C869BA_OFFSET UNITYSDK_OFFSET(0xBE8C880)
#define CLASS_2_766DC31D5CE80B30_1_TICK_OFFSET UNITYSDK_OFFSET(0xBE8C5F0)
#define CLASS_2_766DC31D5CE80B30_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBE8BE10)

inline static constexpr unsigned int Class_2_766DC31D5CE80B30_1_TypeDefinitionIndex = 56449;

class Class_2_766DC31D5CE80B30_1 : public ::Class_1_20D3150E1235DCB5
{
public:
	::System::Boolean DNACMCDJONF; // 0x28

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_766DC31D5CE80B30_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_766DC31D5CE80B30_1_METHOD_2_07280B24DFAC0CA9_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_766DC31D5CE80B30_1_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_766DC31D5CE80B30_1_TICK_OFFSET))(this, a1);
	}

	::Struct_2_27685EFF2E84A814 Method_2_87411ABA28C869BA()
	{
		return ((::Struct_2_27685EFF2E84A814(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_766DC31D5CE80B30_1_METHOD_2_87411ABA28C869BA_OFFSET))(this);
	}
};
