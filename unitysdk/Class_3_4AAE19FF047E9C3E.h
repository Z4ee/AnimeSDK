#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_8A3C2FE068793E61;
class Class_2_3ABA989E5AECB261;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIdleCanEnterAIState; }

#define CLASS_3_4AAE19FF047E9C3E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17D4EC00)
#define CLASS_3_4AAE19FF047E9C3E__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4EB80)

inline static constexpr unsigned int Class_3_4AAE19FF047E9C3E_TypeDefinitionIndex = 34483;

class Class_3_4AAE19FF047E9C3E : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*>
{
public:
	::Class_2_3ABA989E5AECB261* Field_3_0; // 0x28

	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*))((::PBYTE)hIl2Cpp + CLASS_3_4AAE19FF047E9C3E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4AAE19FF047E9C3E_EVALUATE_OFFSET))(this);
	}
};
