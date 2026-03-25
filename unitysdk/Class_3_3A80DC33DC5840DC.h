#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_8A3C2FE068793E61;
namespace RPG::Client::LittleGameShare { class ST_ByRandom; }

#define CLASS_3_3A80DC33DC5840DC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x166EF560)
#define CLASS_3_3A80DC33DC5840DC__CTOR_OFFSET UNITYSDK_OFFSET(0x166EF540)

inline static constexpr unsigned int Class_3_3A80DC33DC5840DC_TypeDefinitionIndex = 28776;

class Class_3_3A80DC33DC5840DC : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_ByRandom*>
{
public:
	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_ByRandom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_ByRandom*))((::PBYTE)hIl2Cpp + CLASS_3_3A80DC33DC5840DC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A80DC33DC5840DC_EVALUATE_OFFSET))(this);
	}
};
