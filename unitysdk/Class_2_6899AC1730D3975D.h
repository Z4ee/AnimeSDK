#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_ModifyOwedRollCount; }

#define CLASS_2_6899AC1730D3975D_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1C243830)
#define CLASS_2_6899AC1730D3975D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C243820)

inline static constexpr unsigned int Class_2_6899AC1730D3975D_TypeDefinitionIndex = 35641;

class Class_2_6899AC1730D3975D : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount* IGHAHBNLIJA; // 0x18
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_6899AC1730D3975D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6899AC1730D3975D_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}
};
