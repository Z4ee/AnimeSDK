#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B71396686248E706;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }

#define CLASS_1_0340E479638D8801_METHOD_1_272270F917A61530_OFFSET UNITYSDK_OFFSET(0x14822E30)
#define CLASS_1_0340E479638D8801_METHOD_1_2BEF430BCB848593_OFFSET UNITYSDK_OFFSET(0x14822E40)
#define CLASS_1_0340E479638D8801__CTOR_OFFSET UNITYSDK_OFFSET(0x14822E20)

inline static constexpr unsigned int Class_1_0340E479638D8801_TypeDefinitionIndex = 89413;

class Class_1_0340E479638D8801 : public ::System::Object
{
public:
	::MoleMole::Config::ConfigHollowInteractCondition* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + CLASS_1_0340E479638D8801__CTOR_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigHollowInteractCondition* Method_1_272270F917A61530()
	{
		return ((::MoleMole::Config::ConfigHollowInteractCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0340E479638D8801_METHOD_1_272270F917A61530_OFFSET))(this);
	}

	::System::Void Method_1_2BEF430BCB848593(::MoleMole::Config::ConfigHollowInteractCondition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + CLASS_1_0340E479638D8801_METHOD_1_2BEF430BCB848593_OFFSET))(this, a1);
	}
};
