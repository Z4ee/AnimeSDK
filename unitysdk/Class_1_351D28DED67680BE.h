#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942_1;
namespace RPG::GameCore { class ComplexSkillAIFactor; }

#define CLASS_1_351D28DED67680BE_METHOD_1_0E86783BB0D70F6D_OFFSET UNITYSDK_OFFSET(0x16533280)

inline static constexpr unsigned int Class_1_351D28DED67680BE_TypeDefinitionIndex = 51876;

class Class_1_351D28DED67680BE : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_0E86783BB0D70F6D(::RPG::GameCore::ComplexSkillAIFactor* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIFactor*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_351D28DED67680BE_METHOD_1_0E86783BB0D70F6D_OFFSET))(a1, a2);
	}
};
