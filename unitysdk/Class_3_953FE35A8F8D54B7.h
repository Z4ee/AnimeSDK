#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsAttacker; }

#define CLASS_3_953FE35A8F8D54B7_METHOD_3_570EF476FB8FB795_OFFSET UNITYSDK_OFFSET(0x17DA43B0)
#define CLASS_3_953FE35A8F8D54B7__CTOR_OFFSET UNITYSDK_OFFSET(0x17D7C050)

inline static constexpr unsigned int Class_3_953FE35A8F8D54B7_TypeDefinitionIndex = 34136;

class Class_3_953FE35A8F8D54B7 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_3_953FE35A8F8D54B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_570EF476FB8FB795()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_953FE35A8F8D54B7_METHOD_3_570EF476FB8FB795_OFFSET))(this);
	}
};
