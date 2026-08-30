#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCanEnterLock; }

#define CLASS_3_CE7C75A6F6EB606E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x197478C0)
#define CLASS_3_CE7C75A6F6EB606E__CTOR_OFFSET UNITYSDK_OFFSET(0x19747840)

inline static constexpr unsigned int Class_3_CE7C75A6F6EB606E_TypeDefinitionIndex = 36292;

class Class_3_CE7C75A6F6EB606E : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*>
{
public:
	::Class_2_21AD365C113DC484* JMMECHDFLKH; // 0x28

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*))((::PBYTE)hIl2Cpp + CLASS_3_CE7C75A6F6EB606E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE7C75A6F6EB606E_EVALUATE_OFFSET))(this);
	}
};
