#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0340E479638D8801.h"

class Class_1_B71396686248E706;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionByEntityType; }

#define CLASS_2_F595298ACB2C302F_METHOD_2_CDD4A7F04C42061E_OFFSET UNITYSDK_OFFSET(0xF281210)
#define CLASS_2_F595298ACB2C302F__CTOR_OFFSET UNITYSDK_OFFSET(0xF281190)

inline static constexpr unsigned int Class_2_F595298ACB2C302F_TypeDefinitionIndex = 51341;

class Class_2_F595298ACB2C302F : public ::Class_1_0340E479638D8801
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionByEntityType* Field_2_0; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + CLASS_2_F595298ACB2C302F__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CDD4A7F04C42061E(::Class_1_B71396686248E706* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B71396686248E706*))((::PBYTE)hIl2Cpp + CLASS_2_F595298ACB2C302F_METHOD_2_CDD4A7F04C42061E_OFFSET))(this, a1);
	}
};
