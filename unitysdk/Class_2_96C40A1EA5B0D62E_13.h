#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_96C40A1EA5B0D62E_13_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15300110)
#define CLASS_2_96C40A1EA5B0D62E_13_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15300180)
#define CLASS_2_96C40A1EA5B0D62E_13_TICK_OFFSET UNITYSDK_OFFSET(0x153001C0)
#define CLASS_2_96C40A1EA5B0D62E_13__CTOR_OFFSET UNITYSDK_OFFSET(0x15300100)

inline static constexpr unsigned int Class_2_96C40A1EA5B0D62E_13_TypeDefinitionIndex = 53738;

class Class_2_96C40A1EA5B0D62E_13 : public ::Class_1_20D3150E1235DCB5
{
public:
	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_13_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_13_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_13_TICK_OFFSET))(this, a1);
	}
};
