#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0340E479638D8801.h"

class Class_1_B71396686248E706;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionAnd; }

#define CLASS_2_1075E1DE59A88E40_METHOD_2_437104B6108A6647_OFFSET UNITYSDK_OFFSET(0x178D9EF0)
#define CLASS_2_1075E1DE59A88E40__CTOR_OFFSET UNITYSDK_OFFSET(0x178D9E70)

inline static constexpr unsigned int Class_2_1075E1DE59A88E40_TypeDefinitionIndex = 70983;

class Class_2_1075E1DE59A88E40 : public ::Class_1_0340E479638D8801
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionAnd* Field_2_0; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + CLASS_2_1075E1DE59A88E40__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_437104B6108A6647(::Class_1_B71396686248E706* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B71396686248E706*))((::PBYTE)hIl2Cpp + CLASS_2_1075E1DE59A88E40_METHOD_2_437104B6108A6647_OFFSET))(this, a1);
	}
};
