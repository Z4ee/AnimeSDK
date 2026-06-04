#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942_1;
namespace RPG::GameCore { class ComplexSkillAIFactor; }

#define CLASS_1_A8FF9024A2F5BD2E_METHOD_1_EC29152E8F447816_OFFSET UNITYSDK_OFFSET(0x13A4B420)

inline static constexpr unsigned int Class_1_A8FF9024A2F5BD2E_TypeDefinitionIndex = 50794;

class Class_1_A8FF9024A2F5BD2E : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_EC29152E8F447816(::RPG::GameCore::ComplexSkillAIFactor* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIFactor*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_A8FF9024A2F5BD2E_METHOD_1_EC29152E8F447816_OFFSET))(a1, a2);
	}
};
