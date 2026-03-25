#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_B1A7D8EBAB39D13D;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HPFull; }

#define CLASS_3_1530AE21C5172C19_METHOD_3_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x165D8F20)
#define CLASS_3_1530AE21C5172C19__CTOR_OFFSET UNITYSDK_OFFSET(0x165D8F00)

inline static constexpr unsigned int Class_3_1530AE21C5172C19_TypeDefinitionIndex = 28460;

class Class_3_1530AE21C5172C19 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HPFull* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HPFull* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_3_1530AE21C5172C19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1530AE21C5172C19_METHOD_3_F39234F2606D8D97_OFFSET))(this);
	}
};
