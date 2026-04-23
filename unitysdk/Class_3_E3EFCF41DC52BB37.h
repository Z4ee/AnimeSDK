#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_EA5232D6CAD71030;
class Class_2_88E944F0BCB55191;
namespace RPG::GameCore { class DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint; }

#define CLASS_3_E3EFCF41DC52BB37_METHOD_3_B36DE086C0903FC5_OFFSET UNITYSDK_OFFSET(0x17C1EFD0)
#define CLASS_3_E3EFCF41DC52BB37_METHOD_3_B6BA737D4F7D84EE_OFFSET UNITYSDK_OFFSET(0x17C1F270)
#define CLASS_3_E3EFCF41DC52BB37__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1EFB0)

inline static constexpr unsigned int Class_3_E3EFCF41DC52BB37_TypeDefinitionIndex = 34140;

class Class_3_E3EFCF41DC52BB37 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_3_E3EFCF41DC52BB37__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_B36DE086C0903FC5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3EFCF41DC52BB37_METHOD_3_B36DE086C0903FC5_OFFSET))(this);
	}

	::System::Boolean Method_3_B6BA737D4F7D84EE(::Class_2_88E944F0BCB55191* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_88E944F0BCB55191*))((::PBYTE)hIl2Cpp + CLASS_3_E3EFCF41DC52BB37_METHOD_3_B6BA737D4F7D84EE_OFFSET))(this, a1);
	}
};
