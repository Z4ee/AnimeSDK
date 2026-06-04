#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_074660E1B46C96C1_Class_1_9D2500B7447E67F1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class ComplexSkillAISourceIsCombatPowerWeightedRandomTarget; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_074660E1B46C96C1_CLASS_2_6135BF7CEA3B51A2_METHOD_2_971DE74610534B63_OFFSET UNITYSDK_OFFSET(0xAFF0530)
#define CLASS_2_074660E1B46C96C1_CLASS_2_6135BF7CEA3B51A2_METHOD_2_C69CB5FEDC06C8B5_OFFSET UNITYSDK_OFFSET(0xAFF02F0)
#define CLASS_2_074660E1B46C96C1_CLASS_2_6135BF7CEA3B51A2_METHOD_2_DD4B79BB7803EB03_OFFSET UNITYSDK_OFFSET(0xAFEF850)
#define CLASS_2_074660E1B46C96C1_CLASS_2_6135BF7CEA3B51A2_METHOD_2_F1A7FFC3C8AFFA3A_OFFSET UNITYSDK_OFFSET(0xAFEF5B0)
#define CLASS_2_074660E1B46C96C1_CLASS_2_6135BF7CEA3B51A2__CTOR_OFFSET UNITYSDK_OFFSET(0xAFF01F0)

inline static constexpr unsigned int Class_2_074660E1B46C96C1_Class_2_6135BF7CEA3B51A2_TypeDefinitionIndex = 50826;

class Class_2_074660E1B46C96C1_Class_2_6135BF7CEA3B51A2 : public ::Class_2_074660E1B46C96C1_Class_1_9D2500B7447E67F1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_CLASS_2_6135BF7CEA3B51A2__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F1A7FFC3C8AFFA3A(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_CLASS_2_6135BF7CEA3B51A2_METHOD_2_F1A7FFC3C8AFFA3A_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* Method_2_DD4B79BB7803EB03(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_CLASS_2_6135BF7CEA3B51A2_METHOD_2_DD4B79BB7803EB03_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_C69CB5FEDC06C8B5(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_CLASS_2_6135BF7CEA3B51A2_METHOD_2_C69CB5FEDC06C8B5_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* Method_2_971DE74610534B63(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_CLASS_2_6135BF7CEA3B51A2_METHOD_2_971DE74610534B63_OFFSET))(this, a1);
	}
};
