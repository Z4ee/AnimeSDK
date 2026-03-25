#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_B1A7D8EBAB39D13D;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasDiceTriple; }

#define CLASS_3_BEB132E354B275CE_METHOD_3_9971E1E176D73C0C_OFFSET UNITYSDK_OFFSET(0x16613E80)
#define CLASS_3_BEB132E354B275CE__CTOR_OFFSET UNITYSDK_OFFSET(0x16613E60)

inline static constexpr unsigned int Class_3_BEB132E354B275CE_TypeDefinitionIndex = 28453;

class Class_3_BEB132E354B275CE : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_3_BEB132E354B275CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_9971E1E176D73C0C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEB132E354B275CE_METHOD_3_9971E1E176D73C0C_OFFSET))(this);
	}
};
