#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_81F809EAA518CA97;
class Class_1_DED4BA2FC834659B;
namespace RPG::GameCore { class HipplenIncidentRandomStepConfig; }
namespace RPG::GameCore { class HipplenIncidentStepConfig; }

#define CLASS_1_9A3694C917D59287_METHOD_1_0F919E8C1F9E6D63_OFFSET UNITYSDK_OFFSET(0x13CA2A70)
#define CLASS_1_9A3694C917D59287_METHOD_1_2A1829026C701434_OFFSET UNITYSDK_OFFSET(0x13CA2CF0)

inline static constexpr unsigned int Class_1_9A3694C917D59287_TypeDefinitionIndex = 70425;

class Class_1_9A3694C917D59287 : public ::System::Object
{
public:
	static ::Class_1_81F809EAA518CA97* Method_1_0F919E8C1F9E6D63(::RPG::GameCore::HipplenIncidentStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::Class_1_81F809EAA518CA97*(*)(::RPG::GameCore::HipplenIncidentStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_9A3694C917D59287_METHOD_1_0F919E8C1F9E6D63_OFFSET))(a1, a2);
	}

	static ::Class_1_81F809EAA518CA97* Method_1_2A1829026C701434(::RPG::GameCore::HipplenIncidentRandomStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::Class_1_81F809EAA518CA97*(*)(::RPG::GameCore::HipplenIncidentRandomStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_9A3694C917D59287_METHOD_1_2A1829026C701434_OFFSET))(a1, a2);
	}
};
