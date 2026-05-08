#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0340E479638D8801.h"

class Class_1_B71396686248E706;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionBySceneProperty; }

#define CLASS_2_24CD250DF9D993DB_METHOD_2_011527D8FB36A26F_OFFSET UNITYSDK_OFFSET(0x141305C0)
#define CLASS_2_24CD250DF9D993DB__CTOR_OFFSET UNITYSDK_OFFSET(0x14130540)

inline static constexpr unsigned int Class_2_24CD250DF9D993DB_TypeDefinitionIndex = 81251;

class Class_2_24CD250DF9D993DB : public ::Class_1_0340E479638D8801
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionBySceneProperty* Field_2_0; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + CLASS_2_24CD250DF9D993DB__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_011527D8FB36A26F(::Class_1_B71396686248E706* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B71396686248E706*))((::PBYTE)hIl2Cpp + CLASS_2_24CD250DF9D993DB_METHOD_2_011527D8FB36A26F_OFFSET))(this, a1);
	}
};
