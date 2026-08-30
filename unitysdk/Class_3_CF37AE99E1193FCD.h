#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatPredicateConfig_AttackerCompareDefender; }

#define CLASS_3_CF37AE99E1193FCD_METHOD_3_5855525A2684D673_OFFSET UNITYSDK_OFFSET(0x1A57CA80)
#define CLASS_3_CF37AE99E1193FCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5611A0)

inline static constexpr unsigned int Class_3_CF37AE99E1193FCD_TypeDefinitionIndex = 35629;

class Class_3_CF37AE99E1193FCD : public ::Class_2_98A798C0C96648F9
{
public:
	::Class_2_48488E8DBD9F6BCE* JFBABKALCPJ; // 0x30
	::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender* MLDMHGBPDGK; // 0x38

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_3_CF37AE99E1193FCD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_5855525A2684D673()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF37AE99E1193FCD_METHOD_3_5855525A2684D673_OFFSET))(this);
	}
};
