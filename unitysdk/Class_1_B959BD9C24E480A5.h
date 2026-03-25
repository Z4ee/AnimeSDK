#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942;
namespace RPG::GameCore { class ComplexSkillAIFactor; }

#define CLASS_1_B959BD9C24E480A5_METHOD_1_806142D475ACF620_OFFSET UNITYSDK_OFFSET(0x108F6080)

inline static constexpr unsigned int Class_1_B959BD9C24E480A5_TypeDefinitionIndex = 43430;

class Class_1_B959BD9C24E480A5 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_806142D475ACF620(::RPG::GameCore::ComplexSkillAIFactor* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIFactor*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_B959BD9C24E480A5_METHOD_1_806142D475ACF620_OFFSET))(a1, a2);
	}
};
