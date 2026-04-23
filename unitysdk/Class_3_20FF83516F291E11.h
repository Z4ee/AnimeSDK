#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsDefender; }

#define CLASS_3_20FF83516F291E11_METHOD_3_570EF476FB8FB795_OFFSET UNITYSDK_OFFSET(0x17C6B4D0)
#define CLASS_3_20FF83516F291E11__CTOR_OFFSET UNITYSDK_OFFSET(0x17C6B4B0)

inline static constexpr unsigned int Class_3_20FF83516F291E11_TypeDefinitionIndex = 34141;

class Class_3_20FF83516F291E11 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_IsDefender* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsDefender* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsDefender*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_3_20FF83516F291E11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_570EF476FB8FB795()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_20FF83516F291E11_METHOD_3_570EF476FB8FB795_OFFSET))(this);
	}
};
