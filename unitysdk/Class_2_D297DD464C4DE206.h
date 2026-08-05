#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0340E479638D8801.h"

class Class_1_B71396686248E706;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionOr; }

#define CLASS_2_D297DD464C4DE206_METHOD_2_437104B6108A6647_OFFSET UNITYSDK_OFFSET(0x10D23430)
#define CLASS_2_D297DD464C4DE206__CTOR_OFFSET UNITYSDK_OFFSET(0x10D233B0)

inline static constexpr unsigned int Class_2_D297DD464C4DE206_TypeDefinitionIndex = 45733;

class Class_2_D297DD464C4DE206 : public ::Class_1_0340E479638D8801
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionOr* Field_2_0; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + CLASS_2_D297DD464C4DE206__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_437104B6108A6647(::Class_1_B71396686248E706* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B71396686248E706*))((::PBYTE)hIl2Cpp + CLASS_2_D297DD464C4DE206_METHOD_2_437104B6108A6647_OFFSET))(this, a1);
	}
};
