#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ComplexSkillAISourceWeaknessCompare; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_00775EE9708BD1A0_METHOD_1_4BCB949B080901EB_OFFSET UNITYSDK_OFFSET(0xC101330)
#define CLASS_1_00775EE9708BD1A0_METHOD_1_7038752B1F2CFCAE_OFFSET UNITYSDK_OFFSET(0xC100F60)

inline static constexpr unsigned int Class_1_00775EE9708BD1A0_TypeDefinitionIndex = 54572;

class Class_1_00775EE9708BD1A0 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_7038752B1F2CFCAE(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_00775EE9708BD1A0_METHOD_1_7038752B1F2CFCAE_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::FixPoint Method_1_4BCB949B080901EB(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_00775EE9708BD1A0_METHOD_1_4BCB949B080901EB_OFFSET))(a1, a2, a3);
	}
};
