#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
class Class_2_88E944F0BCB55191;
namespace RPG::GameCore { class DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint; }

#define CLASS_3_E3EFCF41DC52BB37_METHOD_3_31642670833F6657_OFFSET UNITYSDK_OFFSET(0x1AAFB0A0)
#define CLASS_3_E3EFCF41DC52BB37_METHOD_3_B6BA737D4F7D84EE_OFFSET UNITYSDK_OFFSET(0x1AAFB2B0)
#define CLASS_3_E3EFCF41DC52BB37__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAFB080)

inline static constexpr unsigned int Class_3_E3EFCF41DC52BB37_TypeDefinitionIndex = 35665;

class Class_3_E3EFCF41DC52BB37 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint* EJJEEJENLDA; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_E3EFCF41DC52BB37__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_31642670833F6657()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3EFCF41DC52BB37_METHOD_3_31642670833F6657_OFFSET))(this);
	}

	::System::Boolean Method_3_B6BA737D4F7D84EE(::Class_2_88E944F0BCB55191* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_88E944F0BCB55191*))((::PBYTE)hIl2Cpp + CLASS_3_E3EFCF41DC52BB37_METHOD_3_B6BA737D4F7D84EE_OFFSET))(this, a1);
	}
};
