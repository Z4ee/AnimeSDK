#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C6E8F7731271F88A.h"
#include "unitysdk/MoleMole/Config/ConfigHollowInteractCondition.h"

class Class_1_0340E479638D8801;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSUBSTATE_CREATECONDITION_OFFSET UNITYSDK_OFFSET(0x181CAAE0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSUBSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x181CABC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractConditionBySubState_TypeDefinitionIndex = 50516;

	class ConfigHollowInteractConditionBySubState : public ::MoleMole::Config::ConfigHollowInteractCondition
	{
	public:
		::Enum_3_C6E8F7731271F88A SubState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSUBSTATE__CTOR_OFFSET))(this);
		}

		::Class_1_0340E479638D8801* CreateCondition()
		{
			return ((::Class_1_0340E479638D8801*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSUBSTATE_CREATECONDITION_OFFSET))(this);
		}
	};
}
