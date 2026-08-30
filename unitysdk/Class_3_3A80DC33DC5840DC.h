#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_D93F8AE271D8A728;
namespace RPG::Client::LittleGameShare { class ST_ByRandom; }

#define CLASS_3_3A80DC33DC5840DC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C140620)
#define CLASS_3_3A80DC33DC5840DC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C140600)

inline static constexpr unsigned int Class_3_3A80DC33DC5840DC_TypeDefinitionIndex = 36315;

class Class_3_3A80DC33DC5840DC : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_ByRandom*>
{
public:
	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_ByRandom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_ByRandom*))((::PBYTE)hIl2Cpp + CLASS_3_3A80DC33DC5840DC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A80DC33DC5840DC_EVALUATE_OFFSET))(this);
	}
};
