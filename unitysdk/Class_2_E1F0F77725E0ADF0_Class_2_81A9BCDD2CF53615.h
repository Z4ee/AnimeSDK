#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class ComplexSkillAISourceIsCombatPowerWeightedRandomTarget; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_E1F0F77725E0ADF0_CLASS_2_81A9BCDD2CF53615_METHOD_2_785A7C6A92AAE792_OFFSET UNITYSDK_OFFSET(0x99D3810)
#define CLASS_2_E1F0F77725E0ADF0_CLASS_2_81A9BCDD2CF53615_METHOD_2_9E447FD1FAF98BF3_OFFSET UNITYSDK_OFFSET(0x99D3800)
#define CLASS_2_E1F0F77725E0ADF0_CLASS_2_81A9BCDD2CF53615_METHOD_2_F2603200FC5C1E44_OFFSET UNITYSDK_OFFSET(0x99D3470)
#define CLASS_2_E1F0F77725E0ADF0_CLASS_2_81A9BCDD2CF53615_METHOD_2_FF80D7D1B7827698_OFFSET UNITYSDK_OFFSET(0x99D2CD0)
#define CLASS_2_E1F0F77725E0ADF0_CLASS_2_81A9BCDD2CF53615__CTOR_OFFSET UNITYSDK_OFFSET(0x99D3780)

inline static constexpr unsigned int Class_2_E1F0F77725E0ADF0_Class_2_81A9BCDD2CF53615_TypeDefinitionIndex = 50159;

class Class_2_E1F0F77725E0ADF0_Class_2_81A9BCDD2CF53615 : public ::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_2_81A9BCDD2CF53615__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_FF80D7D1B7827698(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_2_81A9BCDD2CF53615_METHOD_2_FF80D7D1B7827698_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* Method_2_F2603200FC5C1E44(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_2_81A9BCDD2CF53615_METHOD_2_F2603200FC5C1E44_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_9E447FD1FAF98BF3(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* P0, ::RPG::GameCore::GameEntity* P1, ::RPG::GameCore::FixPoint P2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_2_81A9BCDD2CF53615_METHOD_2_9E447FD1FAF98BF3_OFFSET))(this, P0, P1, P2);
	}

	::RPG::GameCore::GameEntity* Method_2_785A7C6A92AAE792(::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget* P0)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISourceIsCombatPowerWeightedRandomTarget*))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_2_81A9BCDD2CF53615_METHOD_2_785A7C6A92AAE792_OFFSET))(this, P0);
	}
};
