#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_8A3C2FE068793E61;
class Class_2_3ABA989E5AECB261;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatID; }

#define CLASS_3_B75994CD6F78B2F5_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17C13290)
#define CLASS_3_B75994CD6F78B2F5__CTOR_OFFSET UNITYSDK_OFFSET(0x17C131C0)

inline static constexpr unsigned int Class_3_B75994CD6F78B2F5_TypeDefinitionIndex = 34481;

class Class_3_B75994CD6F78B2F5 : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*>
{
public:
	::Class_2_3ABA989E5AECB261* Field_3_0; // 0x28
	::Class_2_FBC1E64DC5B2C441* Field_3_1; // 0x30

	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*))((::PBYTE)hIl2Cpp + CLASS_3_B75994CD6F78B2F5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B75994CD6F78B2F5_EVALUATE_OFFSET))(this);
	}
};
