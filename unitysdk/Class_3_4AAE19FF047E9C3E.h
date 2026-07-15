#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIdleCanEnterAIState; }

#define CLASS_3_4AAE19FF047E9C3E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13E8AB00)
#define CLASS_3_4AAE19FF047E9C3E__CTOR_OFFSET UNITYSDK_OFFSET(0x13E8AA80)

inline static constexpr unsigned int Class_3_4AAE19FF047E9C3E_TypeDefinitionIndex = 35436;

class Class_3_4AAE19FF047E9C3E : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*>
{
public:
	::Class_2_21AD365C113DC484* Field_3_0; // 0x28

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*))((::PBYTE)hIl2Cpp + CLASS_3_4AAE19FF047E9C3E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4AAE19FF047E9C3E_EVALUATE_OFFSET))(this);
	}
};
