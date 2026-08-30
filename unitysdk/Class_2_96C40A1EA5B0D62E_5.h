#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_96C40A1EA5B0D62E_5_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x188AFC40)
#define CLASS_2_96C40A1EA5B0D62E_5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x188AFD80)
#define CLASS_2_96C40A1EA5B0D62E_5_TICK_OFFSET UNITYSDK_OFFSET(0x188AFDC0)
#define CLASS_2_96C40A1EA5B0D62E_5__CTOR_OFFSET UNITYSDK_OFFSET(0x188AFC30)

inline static constexpr unsigned int Class_2_96C40A1EA5B0D62E_5_TypeDefinitionIndex = 56446;

class Class_2_96C40A1EA5B0D62E_5 : public ::Class_1_20D3150E1235DCB5
{
public:
	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_5_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_5_TICK_OFFSET))(this, a1);
	}
};
