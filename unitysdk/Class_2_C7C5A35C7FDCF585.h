#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0340E479638D8801.h"

class Class_1_B71396686248E706;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionByEntityType; }

#define CLASS_2_C7C5A35C7FDCF585_METHOD_2_64B67FD79349F75A_OFFSET UNITYSDK_OFFSET(0x15FDC940)
#define CLASS_2_C7C5A35C7FDCF585__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDC8C0)

inline static constexpr unsigned int Class_2_C7C5A35C7FDCF585_TypeDefinitionIndex = 69347;

class Class_2_C7C5A35C7FDCF585 : public ::Class_1_0340E479638D8801
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionByEntityType* Field_2_0; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + CLASS_2_C7C5A35C7FDCF585__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_64B67FD79349F75A(::Class_1_B71396686248E706* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B71396686248E706*))((::PBYTE)hIl2Cpp + CLASS_2_C7C5A35C7FDCF585_METHOD_2_64B67FD79349F75A_OFFSET))(this, a1);
	}
};
