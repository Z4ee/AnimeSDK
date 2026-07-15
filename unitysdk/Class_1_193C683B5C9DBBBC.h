#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942_1;
namespace RPG::GameCore { class ComplexSkillAIConfig; }

#define CLASS_1_193C683B5C9DBBBC_METHOD_1_83DA08DB98D97AC1_OFFSET UNITYSDK_OFFSET(0x16892890)

inline static constexpr unsigned int Class_1_193C683B5C9DBBBC_TypeDefinitionIndex = 51875;

class Class_1_193C683B5C9DBBBC : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_83DA08DB98D97AC1(::RPG::GameCore::ComplexSkillAIConfig* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIConfig*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_193C683B5C9DBBBC_METHOD_1_83DA08DB98D97AC1_OFFSET))(a1, a2);
	}
};
