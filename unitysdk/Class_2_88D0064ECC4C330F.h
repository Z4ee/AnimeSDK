#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0340E479638D8801.h"

class Class_1_B71396686248E706;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionRelativePosition; }

#define CLASS_2_88D0064ECC4C330F_METHOD_2_BDC56F70171A9647_OFFSET UNITYSDK_OFFSET(0x1519CD80)
#define CLASS_2_88D0064ECC4C330F__CTOR_OFFSET UNITYSDK_OFFSET(0x1519D070)

inline static constexpr unsigned int Class_2_88D0064ECC4C330F_TypeDefinitionIndex = 71609;

class Class_2_88D0064ECC4C330F : public ::Class_1_0340E479638D8801
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionRelativePosition* Field_2_0; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + CLASS_2_88D0064ECC4C330F__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BDC56F70171A9647(::Class_1_B71396686248E706* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B71396686248E706*))((::PBYTE)hIl2Cpp + CLASS_2_88D0064ECC4C330F_METHOD_2_BDC56F70171A9647_OFFSET))(this, a1);
	}
};
