#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowInteractCondition.h"
#include "unitysdk/MoleMole/Config/HollowInteractRelativePosition.h"

class Class_1_0340E479638D8801;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONRELATIVEPOSITION_CREATECONDITION_OFFSET UNITYSDK_OFFSET(0x144E0D70)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONRELATIVEPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x144E0E50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractConditionRelativePosition_TypeDefinitionIndex = 42241;

	class ConfigHollowInteractConditionRelativePosition : public ::MoleMole::Config::ConfigHollowInteractCondition
	{
	public:
		::MoleMole::Config::HollowInteractRelativePosition RelativePosition; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONRELATIVEPOSITION__CTOR_OFFSET))(this);
		}

		::Class_1_0340E479638D8801* CreateCondition()
		{
			return ((::Class_1_0340E479638D8801*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONRELATIVEPOSITION_CREATECONDITION_OFFSET))(this);
		}
	};
}
