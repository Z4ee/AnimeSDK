#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowInteractCondition.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/Share/EScenePropertyType.h"

class Class_1_0340E479638D8801;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSCENEPROPERTY_CREATECONDITION_OFFSET UNITYSDK_OFFSET(0x134FEA50)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSCENEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x134FEB30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractConditionBySceneProperty_TypeDefinitionIndex = 76213;

	class ConfigHollowInteractConditionBySceneProperty : public ::MoleMole::Config::ConfigHollowInteractCondition
	{
	public:
		::System::Int32 Target; // 0x10
		::Share::EScenePropertyType Property; // 0x14
		::MoleMole::Config::ValueCompareType CompareType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSCENEPROPERTY__CTOR_OFFSET))(this);
		}

		::Class_1_0340E479638D8801* CreateCondition()
		{
			return ((::Class_1_0340E479638D8801*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSCENEPROPERTY_CREATECONDITION_OFFSET))(this);
		}
	};
}
