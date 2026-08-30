#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"
#include "unitysdk/Struct_2_27685EFF2E84A814.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_96C40A1EA5B0D62E_4_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x1A80A060)
#define CLASS_2_96C40A1EA5B0D62E_4_METHOD_2_87411ABA28C869BA_OFFSET UNITYSDK_OFFSET(0x1A80A280)
#define CLASS_2_96C40A1EA5B0D62E_4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A80A1D0)
#define CLASS_2_96C40A1EA5B0D62E_4_TICK_OFFSET UNITYSDK_OFFSET(0x1A80A210)
#define CLASS_2_96C40A1EA5B0D62E_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A80A050)

inline static constexpr unsigned int Class_2_96C40A1EA5B0D62E_4_TypeDefinitionIndex = 56445;

class Class_2_96C40A1EA5B0D62E_4 : public ::Class_1_20D3150E1235DCB5
{
public:
	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_4_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_4_TICK_OFFSET))(this, a1);
	}

	::Struct_2_27685EFF2E84A814 Method_2_87411ABA28C869BA()
	{
		return ((::Struct_2_27685EFF2E84A814(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_4_METHOD_2_87411ABA28C869BA_OFFSET))(this);
	}
};
