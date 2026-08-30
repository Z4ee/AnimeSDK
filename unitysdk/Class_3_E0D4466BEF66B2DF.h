#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIsSkillCD; }

#define CLASS_3_E0D4466BEF66B2DF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C117280)
#define CLASS_3_E0D4466BEF66B2DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1171A0)

inline static constexpr unsigned int Class_3_E0D4466BEF66B2DF_TypeDefinitionIndex = 36298;

class Class_3_E0D4466BEF66B2DF : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*>
{
public:
	::Class_2_21AD365C113DC484* MMLCJLCFEBB; // 0x28
	::Class_2_FBC1E64DC5B2C441* HEJHGJIGEGK; // 0x30

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*))((::PBYTE)hIl2Cpp + CLASS_3_E0D4466BEF66B2DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0D4466BEF66B2DF_EVALUATE_OFFSET))(this);
	}
};
