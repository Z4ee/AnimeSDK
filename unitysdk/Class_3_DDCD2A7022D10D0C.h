#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_D93F8AE271D8A728;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIsAIState; }

#define CLASS_3_DDCD2A7022D10D0C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16272D50)
#define CLASS_3_DDCD2A7022D10D0C__CTOR_OFFSET UNITYSDK_OFFSET(0x16272D30)

inline static constexpr unsigned int Class_3_DDCD2A7022D10D0C_TypeDefinitionIndex = 36291;

class Class_3_DDCD2A7022D10D0C : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*>
{
public:
	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*))((::PBYTE)hIl2Cpp + CLASS_3_DDCD2A7022D10D0C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDCD2A7022D10D0C_EVALUATE_OFFSET))(this);
	}
};
