#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0340E479638D8801.h"

class Class_1_B71396686248E706;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionBySubState; }

#define CLASS_2_D44C7445CE329F0B_METHOD_2_2C4CACFCB85F415D_OFFSET UNITYSDK_OFFSET(0x1391D4B0)
#define CLASS_2_D44C7445CE329F0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1391D430)

inline static constexpr unsigned int Class_2_D44C7445CE329F0B_TypeDefinitionIndex = 78710;

class Class_2_D44C7445CE329F0B : public ::Class_1_0340E479638D8801
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionBySubState* Field_2_0; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + CLASS_2_D44C7445CE329F0B__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2C4CACFCB85F415D(::Class_1_B71396686248E706* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B71396686248E706*))((::PBYTE)hIl2Cpp + CLASS_2_D44C7445CE329F0B_METHOD_2_2C4CACFCB85F415D_OFFSET))(this, a1);
	}
};
