#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35B024CC96B837C1;
class Class_1_7A8B15961058F2F9;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }

#define CLASS_1_63B7BAADB49B213B_METHOD_1_268EDC1637C255D1_OFFSET UNITYSDK_OFFSET(0x125129F0)
#define CLASS_1_63B7BAADB49B213B_METHOD_1_AE43239692438BE6_OFFSET UNITYSDK_OFFSET(0x12512920)
#define CLASS_1_63B7BAADB49B213B__CTOR_OFFSET UNITYSDK_OFFSET(0x12512910)

inline static constexpr unsigned int Class_1_63B7BAADB49B213B_TypeDefinitionIndex = 68704;

class Class_1_63B7BAADB49B213B : public ::System::Object
{
public:
	::Class_1_35B024CC96B837C1* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_35B024CC96B837C1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B024CC96B837C1*))((::PBYTE)hIl2Cpp + CLASS_1_63B7BAADB49B213B__CTOR_OFFSET))(this, a1);
	}

	::Class_1_7A8B15961058F2F9* Method_1_AE43239692438BE6(::RPG::Client::RelicItemData* a1)
	{
		return ((::Class_1_7A8B15961058F2F9*(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_63B7BAADB49B213B_METHOD_1_AE43239692438BE6_OFFSET))(this, a1);
	}

	::System::Single Method_1_268EDC1637C255D1(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_63B7BAADB49B213B_METHOD_1_268EDC1637C255D1_OFFSET))(this, a1);
	}
};
