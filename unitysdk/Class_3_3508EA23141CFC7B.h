#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasDiceSequence; }

#define CLASS_3_3508EA23141CFC7B_METHOD_3_B572CEEAB2CB6E0D_OFFSET UNITYSDK_OFFSET(0x17C13D20)
#define CLASS_3_3508EA23141CFC7B__CTOR_OFFSET UNITYSDK_OFFSET(0x17C13D00)

inline static constexpr unsigned int Class_3_3508EA23141CFC7B_TypeDefinitionIndex = 34129;

class Class_3_3508EA23141CFC7B : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_3_3508EA23141CFC7B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_B572CEEAB2CB6E0D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3508EA23141CFC7B_METHOD_3_B572CEEAB2CB6E0D_OFFSET))(this);
	}
};
