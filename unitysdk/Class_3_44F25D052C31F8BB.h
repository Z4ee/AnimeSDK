#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsChallenger; }

#define CLASS_3_44F25D052C31F8BB_METHOD_3_B9948C504EF42038_OFFSET UNITYSDK_OFFSET(0x198EEB90)
#define CLASS_3_44F25D052C31F8BB__CTOR_OFFSET UNITYSDK_OFFSET(0x198EEB70)

inline static constexpr unsigned int Class_3_44F25D052C31F8BB_TypeDefinitionIndex = 34802;

class Class_3_44F25D052C31F8BB : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_44F25D052C31F8BB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_B9948C504EF42038()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_44F25D052C31F8BB_METHOD_3_B9948C504EF42038_OFFSET))(this);
	}
};
