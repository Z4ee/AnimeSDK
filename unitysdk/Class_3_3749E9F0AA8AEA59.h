#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatID; }

#define CLASS_3_3749E9F0AA8AEA59_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C0EA910)
#define CLASS_3_3749E9F0AA8AEA59__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0EA830)

inline static constexpr unsigned int Class_3_3749E9F0AA8AEA59_TypeDefinitionIndex = 36295;

class Class_3_3749E9F0AA8AEA59 : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*>
{
public:
	::Class_2_21AD365C113DC484* MMLCJLCFEBB; // 0x28
	::Class_2_FBC1E64DC5B2C441* HEJHGJIGEGK; // 0x30

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*))((::PBYTE)hIl2Cpp + CLASS_3_3749E9F0AA8AEA59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3749E9F0AA8AEA59_EVALUATE_OFFSET))(this);
	}
};
