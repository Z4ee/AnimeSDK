#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_96C40A1EA5B0D62E_7_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xDD88540)
#define CLASS_2_96C40A1EA5B0D62E_7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDD88860)
#define CLASS_2_96C40A1EA5B0D62E_7_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0xDD887D0)
#define CLASS_2_96C40A1EA5B0D62E_7_TICK_OFFSET UNITYSDK_OFFSET(0xDD888A0)
#define CLASS_2_96C40A1EA5B0D62E_7__CTOR_OFFSET UNITYSDK_OFFSET(0xDD88530)

inline static constexpr unsigned int Class_2_96C40A1EA5B0D62E_7_TypeDefinitionIndex = 56448;

class Class_2_96C40A1EA5B0D62E_7 : public ::Class_1_20D3150E1235DCB5
{
public:
	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_7_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_7_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C40A1EA5B0D62E_7_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}
};
