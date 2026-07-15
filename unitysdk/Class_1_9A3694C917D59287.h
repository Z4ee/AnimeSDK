#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8303B8E58A593199;
class Class_1_DED4BA2FC834659B;
namespace RPG::GameCore { class HipplenIncidentRandomStepConfig; }
namespace RPG::GameCore { class HipplenIncidentStepConfig; }

#define CLASS_1_9A3694C917D59287_METHOD_1_0F919E8C1F9E6D63_OFFSET UNITYSDK_OFFSET(0x1625F2B0)
#define CLASS_1_9A3694C917D59287_METHOD_1_2A1829026C701434_OFFSET UNITYSDK_OFFSET(0x1625F530)

inline static constexpr unsigned int Class_1_9A3694C917D59287_TypeDefinitionIndex = 71948;

class Class_1_9A3694C917D59287 : public ::System::Object
{
public:
	static ::Class_1_8303B8E58A593199* Method_1_0F919E8C1F9E6D63(::RPG::GameCore::HipplenIncidentStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::Class_1_8303B8E58A593199*(*)(::RPG::GameCore::HipplenIncidentStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_9A3694C917D59287_METHOD_1_0F919E8C1F9E6D63_OFFSET))(a1, a2);
	}

	static ::Class_1_8303B8E58A593199* Method_1_2A1829026C701434(::RPG::GameCore::HipplenIncidentRandomStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::Class_1_8303B8E58A593199*(*)(::RPG::GameCore::HipplenIncidentRandomStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_9A3694C917D59287_METHOD_1_2A1829026C701434_OFFSET))(a1, a2);
	}
};
