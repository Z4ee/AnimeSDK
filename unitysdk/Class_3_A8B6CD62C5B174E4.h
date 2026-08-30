#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByPropertyCompare; }

#define CLASS_3_A8B6CD62C5B174E4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C193600)
#define CLASS_3_A8B6CD62C5B174E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C193580)

inline static constexpr unsigned int Class_3_A8B6CD62C5B174E4_TypeDefinitionIndex = 36299;

class Class_3_A8B6CD62C5B174E4 : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*>
{
public:
	::Class_2_21AD365C113DC484* JMMECHDFLKH; // 0x28

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*))((::PBYTE)hIl2Cpp + CLASS_3_A8B6CD62C5B174E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8B6CD62C5B174E4_EVALUATE_OFFSET))(this);
	}
};
