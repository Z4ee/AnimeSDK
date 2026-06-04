#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareHasEffect; }

#define CLASS_3_AF8E23487BC05D2D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x189BBFC0)
#define CLASS_3_AF8E23487BC05D2D__CTOR_OFFSET UNITYSDK_OFFSET(0x189BBEE0)

inline static constexpr unsigned int Class_3_AF8E23487BC05D2D_TypeDefinitionIndex = 34762;

class Class_3_AF8E23487BC05D2D : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*>
{
public:
	::Class_2_FBC1E64DC5B2C441* Field_3_0; // 0x28
	::Class_2_21AD365C113DC484* Field_3_1; // 0x30

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*))((::PBYTE)hIl2Cpp + CLASS_3_AF8E23487BC05D2D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF8E23487BC05D2D_EVALUATE_OFFSET))(this);
	}
};
