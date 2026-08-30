#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"
#include "unitysdk/Struct_2_27685EFF2E84A814.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_96C40A1EA5B0D62E_2_METHOD_2_87411ABA28C869BA_OFFSET UNITYSDK_OFFSET(0xBD5EFF0)
#define CLASS_2_96C40A1EA5B0D62E_2_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xBD5ECD0)
#define CLASS_2_96C40A1EA5B0D62E_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBD5EF40)
#define CLASS_2_96C40A1EA5B0D62E_2_TICK_OFFSET UNITYSDK_OFFSET(0xBD5EF80)
#define CLASS_2_96C40A1EA5B0D62E_2__CTOR_OFFSET UNITYSDK_OFFSET(0xBD5ECC0)

inline static constexpr unsigned int Class_2_96C40A1EA5B0D62E_2_TypeDefinitionIndex = 56442;

class Class_2_96C40A1EA5B0D62E_2 : public ::Class_1_20D3150E1235DCB5
{
public:
	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_2_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_2_TICK_OFFSET))(this, a1);
	}

	::Struct_2_27685EFF2E84A814 Method_2_87411ABA28C869BA()
	{
		return ((::Struct_2_27685EFF2E84A814(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_2_METHOD_2_87411ABA28C869BA_OFFSET))(this);
	}
};
