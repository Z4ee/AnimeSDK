#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0340E479638D8801.h"

class Class_1_B71396686248E706;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionAnd; }

#define CLASS_2_511593F66059A24A_METHOD_2_AC13E1A23375417A_OFFSET UNITYSDK_OFFSET(0x114EDA20)
#define CLASS_2_511593F66059A24A__CTOR_OFFSET UNITYSDK_OFFSET(0x114ED9A0)

inline static constexpr unsigned int Class_2_511593F66059A24A_TypeDefinitionIndex = 78851;

class Class_2_511593F66059A24A : public ::Class_1_0340E479638D8801
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionAnd* Field_2_0; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + CLASS_2_511593F66059A24A__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AC13E1A23375417A(::Class_1_B71396686248E706* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B71396686248E706*))((::PBYTE)hIl2Cpp + CLASS_2_511593F66059A24A_METHOD_2_AC13E1A23375417A_OFFSET))(this, a1);
	}
};
