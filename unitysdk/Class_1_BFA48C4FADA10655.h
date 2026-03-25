#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ComplexSkillAISourceWeaknessCompare; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_BFA48C4FADA10655_METHOD_1_3DF80A71F507A7F7_OFFSET UNITYSDK_OFFSET(0x8D00890)
#define CLASS_1_BFA48C4FADA10655_METHOD_1_4BCB949B080901EB_OFFSET UNITYSDK_OFFSET(0x8D00B80)

inline static constexpr unsigned int Class_1_BFA48C4FADA10655_TypeDefinitionIndex = 43440;

class Class_1_BFA48C4FADA10655 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_3DF80A71F507A7F7(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BFA48C4FADA10655_METHOD_1_3DF80A71F507A7F7_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::FixPoint Method_1_4BCB949B080901EB(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BFA48C4FADA10655_METHOD_1_4BCB949B080901EB_OFFSET))(a1, a2, a3);
	}
};
