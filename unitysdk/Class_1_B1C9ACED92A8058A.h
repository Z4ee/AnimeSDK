#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942_1;
namespace RPG::GameCore { class ComplexSkillAISourceValueOverflow; }

#define CLASS_1_B1C9ACED92A8058A_METHOD_1_E9A54B987636C2EA_1_OFFSET UNITYSDK_OFFSET(0xB022840)
#define CLASS_1_B1C9ACED92A8058A_METHOD_1_E9A54B987636C2EA_OFFSET UNITYSDK_OFFSET(0xB022540)

inline static constexpr unsigned int Class_1_B1C9ACED92A8058A_TypeDefinitionIndex = 50805;

class Class_1_B1C9ACED92A8058A : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_E9A54B987636C2EA(::RPG::GameCore::ComplexSkillAISourceValueOverflow* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceValueOverflow*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_B1C9ACED92A8058A_METHOD_1_E9A54B987636C2EA_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_E9A54B987636C2EA_1(::RPG::GameCore::ComplexSkillAISourceValueOverflow* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceValueOverflow*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_B1C9ACED92A8058A_METHOD_1_E9A54B987636C2EA_1_OFFSET))(a1, a2);
	}
};
