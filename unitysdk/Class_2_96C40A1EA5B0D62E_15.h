#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_96C40A1EA5B0D62E_15_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1A02B3D0)
#define CLASS_2_96C40A1EA5B0D62E_15_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A02B450)
#define CLASS_2_96C40A1EA5B0D62E_15_TICK_OFFSET UNITYSDK_OFFSET(0x1A02B490)
#define CLASS_2_96C40A1EA5B0D62E_15__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02B3C0)

inline static constexpr unsigned int Class_2_96C40A1EA5B0D62E_15_TypeDefinitionIndex = 56463;

class Class_2_96C40A1EA5B0D62E_15 : public ::Class_1_20D3150E1235DCB5
{
public:
	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_15_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_15_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_15_TICK_OFFSET))(this, a1);
	}
};
