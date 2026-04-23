#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942_1;
namespace RPG::GameCore { class ComplexSkillAISourceValueOverflow; }

#define CLASS_1_E227069BCB2DE097_METHOD_1_901805DD8D6140FE_OFFSET UNITYSDK_OFFSET(0x9A43D10)
#define CLASS_1_E227069BCB2DE097_METHOD_1_B5159A8301499D87_OFFSET UNITYSDK_OFFSET(0x9A43E90)

inline static constexpr unsigned int Class_1_E227069BCB2DE097_TypeDefinitionIndex = 50138;

class Class_1_E227069BCB2DE097 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_901805DD8D6140FE(::RPG::GameCore::ComplexSkillAISourceValueOverflow* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceValueOverflow*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_E227069BCB2DE097_METHOD_1_901805DD8D6140FE_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_B5159A8301499D87(::RPG::GameCore::ComplexSkillAISourceValueOverflow* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISourceValueOverflow*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_E227069BCB2DE097_METHOD_1_B5159A8301499D87_OFFSET))(a1, a2);
	}
};
