#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_8A3C2FE068793E61;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIsAIState; }

#define CLASS_3_DDCD2A7022D10D0C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17D4C450)
#define CLASS_3_DDCD2A7022D10D0C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4C430)

inline static constexpr unsigned int Class_3_DDCD2A7022D10D0C_TypeDefinitionIndex = 34477;

class Class_3_DDCD2A7022D10D0C : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*>
{
public:
	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*))((::PBYTE)hIl2Cpp + CLASS_3_DDCD2A7022D10D0C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDCD2A7022D10D0C_EVALUATE_OFFSET))(this);
	}
};
