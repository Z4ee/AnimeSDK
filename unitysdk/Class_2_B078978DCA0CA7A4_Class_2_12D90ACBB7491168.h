#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class ComplexSkillAISourceIsCombatPowerWeightedRandomTarget; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_B078978DCA0CA7A4_CLASS_2_12D90ACBB7491168_METHOD_2_DD4B79BB7803EB03_OFFSET UNITYSDK_OFFSET(0xC451FF0)
#define CLASS_2_B078978DCA0CA7A4_CLASS_2_12D90ACBB7491168_METHOD_2_F1A7FFC3C8AFFA3A_OFFSET UNITYSDK_OFFSET(0xC451D50)
#define CLASS_2_B078978DCA0CA7A4_CLASS_2_12D90ACBB7491168__CTOR_OFFSET UNITYSDK_OFFSET(0xC452990)

inline static constexpr unsigned int Class_2_B078978DCA0CA7A4_Class_2_12D90ACBB7491168_TypeDefinitionIndex = 54595;

class Class_2_B078978DCA0CA7A4_Class_2_12D90ACBB7491168 : public ::Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_2_12D90ACBB7491168__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F1A7FFC3C8AFFA3A(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_2_12D90ACBB7491168_METHOD_2_F1A7FFC3C8AFFA3A_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* Method_2_DD4B79BB7803EB03(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_2_12D90ACBB7491168_METHOD_2_DD4B79BB7803EB03_OFFSET))(this, a1);
	}
};
