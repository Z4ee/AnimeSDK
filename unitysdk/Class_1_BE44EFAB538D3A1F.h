#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ComplexSkillAISourceWeaknessCompare; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_BE44EFAB538D3A1F_METHOD_1_2A8256E4A7238472_OFFSET UNITYSDK_OFFSET(0xAD20100)
#define CLASS_1_BE44EFAB538D3A1F_METHOD_1_4BCB949B080901EB_OFFSET UNITYSDK_OFFSET(0xAD20400)

inline static constexpr unsigned int Class_1_BE44EFAB538D3A1F_TypeDefinitionIndex = 50804;

class Class_1_BE44EFAB538D3A1F : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_2A8256E4A7238472(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BE44EFAB538D3A1F_METHOD_1_2A8256E4A7238472_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::FixPoint Method_1_4BCB949B080901EB(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceWeaknessCompare*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BE44EFAB538D3A1F_METHOD_1_4BCB949B080901EB_OFFSET))(a1, a2, a3);
	}
};
