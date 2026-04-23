#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasDiceTriple; }

#define CLASS_3_BEB132E354B275CE_METHOD_3_9971E1E176D73C0C_OFFSET UNITYSDK_OFFSET(0x17CE2DB0)
#define CLASS_3_BEB132E354B275CE__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE2D90)

inline static constexpr unsigned int Class_3_BEB132E354B275CE_TypeDefinitionIndex = 34128;

class Class_3_BEB132E354B275CE : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_3_BEB132E354B275CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_9971E1E176D73C0C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEB132E354B275CE_METHOD_3_9971E1E176D73C0C_OFFSET))(this);
	}
};
